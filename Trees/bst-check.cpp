#include "SplayTree.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;


int main(){
//template <typename T>
Tree_t t;

t.insert(1, 2);
t.insert(2, 3);
t.insert(2, 4);
Return_t ret = t.search(2);
cout << ret.data << endl;
cout << t.remove(2) << endl;
cout << t.remove(1) << endl;
ret = t.search(2);
cout << ret.data << endl;

}