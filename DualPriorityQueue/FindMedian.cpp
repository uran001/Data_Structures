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


int main(int argc, char* argv[])

{

	std::vector<int> v;
	priority_queue<int, std::vector<int>, greater<int>> minheap;
	priority_queue<int> maxheap;

	int median = 0;

   	if(argc != 3)
   		return 1;

   	string file_name;

   	file_name = string(argv[1]);

   	ifstream cin;
	ofstream cout;
	cin.open(file_name, std::fstream::in | std::fstream::out);

	cout.open("submit.txt", std::fstream::out);

	int buffer;

	//int i = 1;

	while(!cin.eof()){
		
		cin >> buffer;

		if(cin.eof())
			break;
		//cout << buffer << endl;
		
		if(buffer < median)
			maxheap.push(buffer);
		else
			minheap.push(buffer);

		if(minheap.size() > maxheap.size() + 1){
			maxheap.push(minheap.top());
			minheap.pop();
		}
		else if(maxheap.size() > minheap.size() + 1){
			minheap.push(maxheap.top());
			maxheap.pop();
		}

		if(minheap.size() <= maxheap.size())
			median = maxheap.top();
		else if (minheap.size() > maxheap.size())
			median = minheap.top();
		

		cout << median << endl;


	}

	


	return 0;

}
