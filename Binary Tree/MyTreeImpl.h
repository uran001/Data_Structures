#include "MyTree.h"
#include <list>
#include <stack>
#include <queue>
#include <fstream>
#include <iostream>
#include <vector>


using namespace std;

struct TreeNode
{
    TreeNode* left;
    TreeNode* right;
    string key;
    TreeNode(string x): left(NULL), right(NULL), key(x){}
    
};

class MyTreeImpl : public MyTree {

    private:
            
            TreeNode* root;
            int root_sz;
            vector<string> v;
            vector<pair<string, string> > vars;
            

    public:
        MyTreeImpl() : MyTree() {
           // root = new TreeNode("");
            root_sz = 0;        
        }

       
        TreeNode* build(TreeNode* root, int start, int size){ 

            if (start < size){

            
                //BigInt cur = BigInt(v[start]);
                root = new TreeNode(v[start]);
                root_sz ++;


            
                root->left = build(root->left, 2*start + 1, size);

                root->right = build(root->right, 2*start + 2, size);
                
            }

            return root;
        

    }


        

        void check_sanity(TreeNode* root){

            if(root == NULL)
                return;

            if(root != NULL){
                string temp = root->key;
                if(!(temp == "-" || temp == "+" || temp == "*")){
                    if(root->left!= NULL || root->right != NULL)
                        throw runtime_error("Tree is not valid");
                }

                if((temp == "-" || temp == "+" || temp == "*")){
                    if(root->left == NULL || root->right == NULL)
                        throw runtime_error("Tree is not valid");
                }

                temp = "";
                check_sanity(root->left);
                check_sanity(root->right);

            }

        }

        void load(string& input_name) {

             ifstream cin;
            
             cin.open("input.txt", std::fstream::in | std::fstream::out);
                

            string buffer;
            while(!cin.eof()){
                cin >> buffer;
                v.push_back(buffer);
                if (cin.eof())
                    break;
            }

         // cout << v.size() << endl;
         
         // Building Tree
         root = build(root, 0, v.size());

         // Check Sanity

         check_sanity(root);
        }


        void get_post(TreeNode* root, string &s){

            if (root == NULL){
                return;
            }

            get_post(root->left, s);
            get_post(root->right, s);

            string temp = root->key;
           // cout << temp << endl;
            s += (temp) + " ";
           

            
        }
        string traverse_post(void) {

            string s = "";

           // cout << root->key.to_string();
            get_post(root, s);
            
            s.erase(s.size() - 1);
           return s;

        }

        void get_pre(TreeNode* root, string &s){
            if (root == NULL)
                return;
            s += root->key + " ";

            get_pre(root->left, s);
            get_pre(root->right, s);

        }

        string traverse_pre(void) {
            string s = "";

            get_pre(root, s);
            s.erase(s.size() - 1);
            return s;
        }

        string getvar(string temp){
            int sz = vars.size();
            for (int i = 0; i < sz; i ++){
                if (vars[i].first == temp)
                    return vars[i].second;
            }
            return "";
        }
        BigInt get_eval(TreeNode* root){
            if (root == NULL)
                return 0;

            if(root->left == NULL && root->right == NULL){
                string temp = root->key;
                if(temp[0] == 'v')
                    temp = getvar(temp);

                return BigInt(temp);
            }

            BigInt left_val = get_eval(root->left);

            BigInt right_val = get_eval(root->right);

            string temp = root->key;
            
            if((temp == "-" || temp == "+" || temp == "*")){
                if(root->key == "-")
                    return left_val - right_val;
                if (root->key == "+")
                    return left_val + right_val;
                if (root->key == "*")
                    return left_val * right_val;
            }
        return 0;
        }
        BigInt eval(string& assign_file_name) {
            
            ifstream cin;

            cin.open(assign_file_name, std::fstream::in | std::fstream::out);

            string var, val;
            while(!cin.eof()){
                cin >> var >> val;
                vars.push_back(make_pair(var, val));
            }

            BigInt ans = get_eval(root);
            return ans;

        }



      
       void make_simple(TreeNode* root, bool &change){
        if(root == NULL)
                return;

            if (root->left != NULL && root->right != NULL){
                if (root->left->left == NULL && root->left->right == NULL &&
                    root->right->left == NULL && root->right->right == NULL){

                    string temp = root->left->key;
                    string temp1 = root->right->key;

                    //Checking for variable 
                    if (temp[0] != 'v' && temp1[0] != 'v'){

                    change = true;
                    BigInt left = BigInt(root->left->key);
                    BigInt right = BigInt(root->right->key);



                    if(root->key == "-"){
                        BigInt temp = left - right;
                        root->key = temp.to_string();
                    }
                    if(root->key == "+"){
                        BigInt temp = left + right;
                        root->key = temp.to_string();
                    }
                    if(root->key == "*"){
                        BigInt temp = left * right;
                        root->key = temp.to_string();
                    }

                     root->left = NULL;
                     root->right = NULL;
                    // free(root->left);
                    // free(root->right);
                }
            }

        }

             
            make_simple(root->left, change);
            make_simple(root->right, change);
           

       }
       void simplify(void) {
            
            while(1){
            bool f = false;
            make_simple(root, f);

            if (f == false)
                return;
        }

        }
};
