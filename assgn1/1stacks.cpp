#include<iostream>
#define MAX_SIZE 10

template <class T>
class TwoStacks{
  public:
    TwoStacks();
    int getArraySize();
  private:
    T _array[MAX_SIZE];
    int _size;
};

template <class T>
TwoStacks<T>::TwoStacks(){
    _size = MAX_SIZE;
}

template <class T>
int TwoStacks<T>::getArraySize(){
    return _size;
}

// Testing the TwoStacks
int main(){
    TwoStacks<int> s;
    std::cout << s.getArraySize() << "\n";
    return 0;
}
