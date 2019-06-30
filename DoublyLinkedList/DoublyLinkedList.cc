#include "DoublyLinkedList.h"
#include <stdexcept>
#include <string>


	//DoublyLinkedList::~DoublyLinkedList(){}


	bool DoublyLinkedList::empty() const{
		if(this->size == 0)
    		return true;
    	return false;
	}
	void DoublyLinkedList::remove_front(){
		if (this->head == NULL) 
       		return; 
  
    // Move the head pointer to the next node 
    	Node *temp = this->head; 
    	head = this->head->next; 
    
   	 	delete temp;  
    	this->size --;
	}

    int& DoublyLinkedList::front() const{
    try{
    	if (this->head == NULL)
    		throw runtime_error ("");
    	else
    	return this->head->val;
    } 
    catch(exception const& e)
	{	
    printf("a runtime error");
	} 
    	
  }

	int& DoublyLinkedList::back() const{
		try{
    	if (this->tail == NULL)
    		throw runtime_error ("");
    	else
    	return this->tail->val;
    } 
    catch(...)
	{	
    printf("a runtime error");
	} 
    }

	void DoublyLinkedList::add_front(const int& e){
		if(this->size == 0){
				Node *temp = new Node;
				temp->val = e;
				//temp.val.key = 0;
				this->head = temp;
				this->tail = temp;
				this->size = ++(this->size);
				//cout << "fomr " << head->val << endl; 
			}
			else{
				Node *temp = new Node;
				temp->val= e;
				//temp.val.key = size;
				temp->next = this->head;
				this->head->prev = temp;
				this->head = temp;
				this->size = ++(this->size);
				//cout << "dfhg " << head->val << endl;
			}
	}
	void DoublyLinkedList::add_back(const int& e){
		if (size == 0)
{
    Node *temp = new Node;
    temp->val = e;
    //temp.val.key = 0;
    this->head = temp;
    this->tail = temp;
    this->size = ++(this->size);
}
else
{
    Node *temp = new Node;
    temp->val= e;
   // temp.val.key = 0;
    this->tail->next = temp;
    temp->prev = this->tail;
    this->tail = temp;
    this->size = ++(this->size);
	}
}

	void DoublyLinkedList::remove_back(){
			if(this->head == NULL) {  
        return;  
    }  
    else {  
        //Checks whether the list contains only one node  
        if(this->head != tail) {  
            this->tail = this->tail->prev;  
            this->tail->next = NULL;  
        }  
        else {  
            this->head = this->tail = NULL;  
        }

        this->size --;  
    }  
	}

	size_t DoublyLinkedList::get_size() const{
		return this->size;
	}
	string DoublyLinkedList::to_string(){
		Node *temp = this->head;
		string s = "";
		while(temp->next != NULL){
			s += char(temp->val + 48);
			s += " ";
			temp = temp->next;
		}
		s += char(temp->val + 48);
		return s;
	}
	string DoublyLinkedList::to_reverse_string(){
		Node *temp = this->head;
		string s = "";
		while(temp->next != NULL){
			s += char(temp->val + 48);
			s += " ";
			temp = temp->next;
		}
		s += char(temp->val + 48);
		string ans = "";
		for (int i = s.size() - 1; i >= 0; i --){
			ans += s[i];
		}
		return ans;
	}


