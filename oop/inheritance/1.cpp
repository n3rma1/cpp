
// this program will not compile because defination of function in derived class hides 
// all the overloaded function in base class

#include <iostream>
using namespace std;
class B { 
  public: 
    void greet(int c) {
      cout << c;
    }
    void greet() { 
      cout << "Hello B";
    }
};
class D : public B {
  public:
    void greet() {
      cout << "Hello D";
    }
};

int main() {
  D d;
  d.greet(3);
  return 0;
}