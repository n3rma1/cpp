// defining a class member outside the class template
#include <iostream>
using namespace std;

template <class T>
class Number{
  public:
    T getNum();
};

// function defination
template <class T>
T Number<T>::getNum(){
    return 11;
}

int main(){
  Number<int> n;
  cout << n.getNum();
}