#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <functional>
#include <fstream>
#include <ostream>
#include <sstream>
#include <string>
using namespace std;


template<typename T, class Container,class Compare > class my_priority_queue : public std::priority_queue<T, Container, Compare>{
public:
    
    void front(){
        
        auto to = this->c.end();
        int min_val = 1000000;
        for(auto it = this->c.begin(); it != this->c.end(); ++it){
            if(min_val > *it){
                min_val = *it;
                to = it;
            }
         }

         if(to != this->c.end()){
           this->c.erase(to);
           std::make_heap(this->c.begin(), this->c.end(), this->comp);
         }
    }

    void back(){
        auto to = this->c.end();
        int max_val = -1000000;
        for(auto it = this->c.begin(); it != this->c.end(); ++it){
            if(max_val < *it){
                max_val = *it;
                to = it;
            }
         }

         if(to != this->c.end()){
           this->c.erase(to);
           std::make_heap(this->c.begin(), this->c.end(), this->comp);
         }
    }

    int get(){
        int min_val = 1000000000;

        for(auto it = this->c.begin(); it != this->c.end(); ++it){
          //  cout << *it << " ";
            min_val = min(min_val, *it);
        }
        return min_val;
    }
};

int main(int argc, char* argv[])
{
 
	my_priority_queue<int, std::vector<int>, less<int>> maxheap;
   

   	if(argc != 3)
   		return 1;

   	string file_name, file_submit;

   	file_name = string(argv[1]);
   	file_submit = string(argv[2]);

   	ifstream cin;
	ofstream cout;
	
	cin.open(file_name, std::fstream::in | std::fstream::out);
	cout.open(file_submit, std::fstream::out);
	
	char cmd;
	int buffer;

	
	int k;
	cin >> k;

	while(k --){
		
		cin >> cmd >> buffer;

		if(cmd == 'I')
			maxheap.push(buffer);
		

		else if (cmd == 'D')
			if (buffer == 1 && maxheap.size() > 0)
				maxheap.back();
            
			else if(buffer == -1 && maxheap.size() > 0)
				maxheap.front();		
	}

    if(!maxheap.size())
		cout << "EMPTY\n";

	else
		cout << maxheap.top() << " " << maxheap.get() << endl;

	return 0;
}

