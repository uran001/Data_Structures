#include "MyQueue.h"
#include <stdexcept>
using namespace std;
template<typename T, size_t N>
class MyQueueImpl : public MyQueue<T,N> {

    protected:

        T* array[N];

        T* alloc(){
            return new T();
        }
    private:
         
        int current_size;   
        

    public:
        MyQueueImpl<T,N>() : MyQueue<T,N>() {
        
            current_size = -1;
        }   


        T& front() const {
          
            if(current_size == -1)
                throw runtime_error("Queue is empty");
            
            return *array[0];
            


                 
         

        }

        T& back() const {
           
            if(current_size == -1)
                 throw runtime_error("Queue is empty");
            return *array[current_size];
        
          
        }

        

        void push(const T& e) {
            
                if (current_size + 1 == int(N))
                     throw runtime_error("Queue is Full");
                current_size ++;
                array[current_size] = alloc();
                *array[current_size] = e;
               
           
        }

        void pop() {

            
                if (current_size == -1)
                     throw runtime_error("Queue is empty");
                
                delete array[0];

                for(int i = 0; i < current_size; i ++){
                    array[i] = array[i + 1];
                }
               // delete array[current_size];
                current_size--;
            

        }
        

        size_t size() const {
            return current_size + 1;
        }
};
