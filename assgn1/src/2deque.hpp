#include <iostream>
#define MAX_SIZE 10

template <class T>
class Deque{
  public:
    Deque();
    void push(T);
    T pop();
    void inject(T);
    T eject();
  private:
    T* front_ptr;
    T* rear_ptr;
    T array[2*MAX_SIZE];
};

template <class T>
Deque::Deque(){
    front_ptr = NULL;
    rear_ptr = NULL;
}

template <class T>
void Deque::push(T){
    if(front_ptr!=NULL and rear_ptr!=NULL){
        front_ptr--;
    }else{
        front_ptr = array+=MAX_SIZE;
        rear_ptr = front_ptr;
    }
}

template <class T>
T Deque::pop(){
    return *front_ptr;
}

template <class T>
void Deque::inject(T){
    if(front_ptr!=NULL and rear_ptr!=NULL){
        rear_ptr++;
    }else{
        front_ptr = array+=MAX_SIZE;
        rear_ptr = front_ptr;
    }
}

template <class T>
T Deque::eject(){
    return *rear_ptr;
}
