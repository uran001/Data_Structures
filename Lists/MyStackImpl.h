#include "MyStack.h"
#include <stdexcept>
using namespace std;


template<typename T>
class MyStackImpl : public MyStack<T>{

    protected:
    
        T* array = new T[1000];

        T* alloc(){
            return new T();
        }

    private:

        int currentsize;
        int arraysize;
    
    public:
        MyStackImpl<T>()  : MyStack<T>() {
            
            currentsize = -1;
            arraysize = 1000;

        }

        T& top() const {
            if (currentsize == -1)
                throw(runtime_error("Stack is empty"));
            return array[currentsize];

        }

        size_t size() const {
            return currentsize + 1;
        }

        void push(const T& e) {

            

             if (currentsize == arraysize){
                    T* temp = new T[arraysize * 2];
                    for(int i = 0; i < arraysize; i ++)
                        temp[i] = array[i];

                    delete [] array;

                    array = temp; 
                    arraysize = arraysize * 2;

            }

            currentsize ++;
            array[currentsize] = e;

        }
        void pop() {

            currentsize --;

        }
        ~MyStackImpl<T>()  {
        }


};
