#ifndef DEQUE_ASSGN_2_HPP
#define DEQUE_ASSGN_2_HPP
#include <iostream>
#define MAX_SIZE 10

template <class T>
class MyDeque{
  public:
    MyDeque();
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
MyDeque<T>::MyDeque(){
    front_ptr = NULL;
    rear_ptr = NULL;
}

template <class T>
void MyDeque<T>::push(T data){
    if(front_ptr!=NULL and rear_ptr!=NULL){
        front_ptr--;
    }else{
        front_ptr = array;
        rear_ptr = array;
        for(int i=0; i<MAX_SIZE;++i){
            front_ptr++;
            rear_ptr++;
        }
    }
    *front_ptr = data;
}

template <class T>
T MyDeque<T>::pop(){
    T data;
    if (front_ptr){
        data = *front_ptr;
    }else{
        std::exception e;
        throw e;
    }
    if (front_ptr == rear_ptr){
        front_ptr = NULL;
        rear_ptr = NULL;
    }else{
        front_ptr++;
    }
    return data;
}

template <class T>
void MyDeque<T>::inject(T data){
    if(front_ptr!=NULL and rear_ptr!=NULL){
        rear_ptr++;
    }else{
        front_ptr = array;
        rear_ptr = array;
        for(int i=0; i<MAX_SIZE;++i){
            front_ptr++;
            rear_ptr++;
        }
    }
    *rear_ptr = data;
}

template <class T>
T MyDeque<T>::eject(){
    T data;
    if (rear_ptr){
        data = *rear_ptr;
    }else{
        std::exception e;
        throw e;
    }
    if (front_ptr == rear_ptr){
        front_ptr = NULL;
        rear_ptr = NULL;
    }else{
        rear_ptr--;
    }
    return data;
}
#endif
