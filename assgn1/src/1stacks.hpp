#ifndef STACKS_ASSGN1_HPP
#define STACKS_ASSGN1_HPP
#include<iostream>
#include<stdexcept>
#define DEFAULT_SIZE 128

template <class T>
class TwoStacks{
  public:
    TwoStacks();
    TwoStacks(int);
    int getArraySize();
    T pop(int);
    void push(int, T);
  private:
    T* _array;
    int _size;
    int _pos[2];
    void initializeArray();
};

template <class T>
TwoStacks<T>::TwoStacks(){
    _size = DEFAULT_SIZE;
    initializeArray();
}

template <class T>
TwoStacks<T>::TwoStacks(int size){
    _size = size;
    initializeArray();
}

template <class T>
void TwoStacks<T>::initializeArray(){
    _array = new T[_size];
    _pos[0] = 0;
    _pos[1] = _size;
}

/* pop() implementation: takes 0 or 1 as integer input and pops the element of
 * the first stack or the second respectively
 */
template <class T>
T TwoStacks<T>::pop(int sn){
    T res = _array[_pos[sn]];
    _pos[sn] = (sn==0)?_pos[sn]-1:_pos[sn]+1;
    return res;
}

template <class T>
void TwoStacks<T>::push(int sn, T data){
    if (_pos[1]-_pos[0] <= 0){
        throw std::overflow_error("Array Full: Stack Overflow");
    }else{
        _pos[sn] = (sn==0)?_pos[sn]+1:_pos[sn]-1;
        _array[_pos[sn]] = data;
    }
}

template <class T>
int TwoStacks<T>::getArraySize(){
    return _size;
}
#endif
