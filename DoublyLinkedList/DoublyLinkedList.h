#ifndef __DOUBLY_LINKED_LIST_H__
#define __DOUBLY_LINKED_LIST_H__
using namespace std;
#include "List.h"

struct dataElement {
  int key;
  int id;
};

struct Node
{
	int val;
	Node* next;
	Node* prev;
};


class DoublyLinkedList: public List {
  /* Fill me */
private:

	Node* head; 
	Node* tail; 
	int size;

public:

	DoublyLinkedList(){
		size = 0;
	}
	//~DoublyLinkedList();
    bool empty()const override;
    	//cout << "ewrwe " << size << endl;
    	
   
	void remove_front() override;

	int& front() const override;
		//int& x = head->val;
		//cout << x << endl;
		
	
	int& back() const override;
		//int& x = tail->val;
		//cout << x << endl;
	
	void add_front(const int& e) override;
	void add_back(const int& e) override;

	void remove_back() override;


	
	size_t get_size() const override;
		//cout << head->val << endl;
		
	
	string to_string() override;


	string to_reverse_string() override;


};


#endif

