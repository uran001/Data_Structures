#include <fstream>
#include <string>
#include <list>
#include <stack>
#include <sstream>
#include <iostream>
#include <stdexcept>
using namespace std;
class Textedit {

    private:
        stack<char> un;
        stack<int> cm;

        int cur;
        int size;

        string text; 

    public:

        
        Textedit() {
            
            cur = -1;
            size = 0;
            text = "";

        }

    public:
        /*
         * left:
         * moves the cursor to the left.
         * do nothing if the cursor is already at the leftmost
         */
        

        string gettext(){
            return text;
        }

        int cursor(){
            return cur;
        }

        void left(bool mk) {
            if (cur > 0){
                cur --;
                if (mk)
                    cm.push(0);
            }
        }

        /*
         * right:
         * moves the cursor to the left.
         * do nothing if the cursor is already at the leftmost
         */
        void right(bool mk) {
            if (cur < size - 1){
                cur ++;
                if (mk)
                    cm.push(1);
            }
        }


        /*
         * insert
         * insert the character before the cursor.
         */
        void insert(char in, bool mk){

            //un.push(in);
            if(mk)
                cm.push(2);

            if (cur == -1){
                text += in;
            }
            else if (cur == 0){
                string temp = "";
                temp += in;
                temp += text;
                text = temp;
            }
            else if(cur == size - 1){
                text += in;
            }

            else{
                string temp = "";

                for (int i = 0; i < cur; i ++){
                    temp += cur;
                }
                temp += in;

                for (int i = cur + 1; i < size; i ++)
                    temp += text[i];

                text = temp;
            }

            size ++;
            if (cur < size - 1)
                cur ++;
        }


        /*
         * del
         * delete the character before the cursor.
         * if the cursor if at the beginning or
         * the string is empty, do nothing (no runtime error!!)
         */
        void del(bool mk) {

            if (mk){
            un.push(text[cur]);
            cm.push(3);
            }

            text.erase(text.begin() + cur);

            if(cur > 0)
                cur --;
            size --;
            
        }

        /*
         * write
         * This is not a command but a helper function.
         * Write the string to the file
         */
        void write(string outname) {
            ofstream fout(outname);
            fout << text;
            fout.close();
        }


        /*
         * execute
         * This is an optional helper function.
         * Implementing this to execute one command by invoking
         * the individual operation will make your life easier.
         */
        void execute(string cmd) {
        
            if(cmd[0] == 'i')
                insert(cmd[cmd.size() - 1], 1);

            else if (cmd[0] == 'd')
                del(1);

            else if (cmd[0] == 'l')
                left(1);
            
            else if(cmd[0] == 'r')
                right(1);

            else
                undo();

        }
        /*
         * undo:
         * reverts the last executed command.
         * To repeat undoing, all executed commands should be kept in the stack.
         * Note that we don't have "redo" command
         */


        void undo() {

            int cmd = cm.top();

            if (cmd == 2)
                del(0);

            else if (cmd == 3){
                insert(un.top(), 0);
                un.pop();
            }

            else if (cmd == 0)
                right(0);

            else if (cmd == 1)
                left(0);
            cm.pop();
        }
    public:
        /*
         * This is the only interface for this class.
         * It reads the input file line by line and
         * call appropriate operations to execute the commands.
         * At the end, it calls  the write function to write the
         * resulting string to the fname_out.
         */
        void process(string fname_in, string fname_out) {
            
            ifstream cin;
            cin.open(fname_in,std::fstream::in | std::fstream::out);
            
            string line;
            while(getline(cin, line)){
                execute(line);
            }

            write(fname_out);


        }

};
