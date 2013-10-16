#ifndef HEAPS_ASSGN2_HPP
#define HEAPS_ASSGN2_HPP
#include <iostream>

template <class T>
class Heap{
  public:
    Heap();
    void Initialize(T*,int);
    void Add(T);
    void Add(T*,int);
    void Delete();
    void DecreaseAllKeys(T delta);
  private:
    T* _array;
    int _n;
};

Heap::Heap(){
    T* _array = new T(255);
    _n = 0;
}

void Heap::Initialize(T* ar,int n){
    _n = 0;
    for (int i=0; i<n; ++i){
        this->Add(ar[i])
    }
}

void Heap::Add(T x){
    if (_n==0){
        _array[0]=x
    }else{
        _array[n]=x;
    }
    _n++;
}

void Heap::Delete(){
    
}

#endif
