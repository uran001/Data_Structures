#pragma once
#include "MyPriorityQueue.h"
#include <stdexcept>
#include <vector>
using namespace std;
template<typename T, bool isMax, size_t Cap>

//#define max_size = 1000
/*
if "isMax" is True, this will be the priority queue with maxHeap.
otherwise, it will be with minHeap.
You need to implement both. 
*/
class MyPriorityQueueImpl : public MyPriorityQueue<T, isMax, Cap> {

private:

	T* priority_queue;
	int queue_size;
	

public:
	MyPriorityQueueImpl<T, isMax, Cap>() : MyPriorityQueue<T, isMax, Cap>() {
			
			queue_size = 0;
			priority_queue = new T[Cap];
	}

	T& top() const {
		if(queue_size == 0)
			throw runtime_error("Queue is empty!");
		return priority_queue[queue_size - 1];
	}
	size_t size() const {
		return queue_size;
	}
	bool empty() const {
		return queue_size < 0;
	}

	
	void push(const T& e) {

		if(queue_size == Cap){
			throw runtime_error("Queue is full!");
		}

		queue_size ++;
		

		priority_queue[queue_size - 1] = e;

		if(isMax){

			if(queue_size > 1){
				int cur = queue_size - 1;
				for(int i = queue_size - 2; i >= 0; i --){
					if(e > priority_queue[i])
						break;
					else{
						swap(priority_queue[i], priority_queue[cur]);
						cur = i;
					}
				}
			}

		}
		if(!isMax){

			if(queue_size > 1){
				int cur = queue_size - 1;
				for(int i = queue_size - 2; i >= 0; i --){
					if(e < priority_queue[i])
						break;
					else{ 
						swap(priority_queue[i], priority_queue[cur]);
						cur = i;
					}
				}
			}

		}
	}

	void pop() {

		if(queue_size == 0)
			throw runtime_error("Queue is empty!");
		
		queue_size --;
	}
};

