#include <fstream>
#include <list>
#include <iostream>

using namespace std;


void classify(void) {

    ifstream fin;
    ofstream fout;
    
    fin.open("input-classify.txt",std::fstream::in | std::fstream::out);
   	fout.open("output-classify.txt", std::fstream::out);
    
   
    list<int> *a;
    a = new list<int> [5];
    int buffer;



    while(!fin.eof()){
    	fin >> buffer;

    	a[buffer%5].push_back(buffer);
    	if(fin.eof()) break;
    }

    //fout << n << endl;
   
	for (int i = 0; i < 5; i ++){
		if (a[i].size() != 0){
			//fout << a[i].size() << endl;
			
			while(!a[i].empty()){
				fout << a[i].front();
				if (a[i].size() > 1)
					fout << " ";
				a[i].pop_front();
			}
			fout << endl;
		}
	}   
 
}


int main(int argc, char* argv[]) {
    classify();
}
