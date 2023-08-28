// copy constructor:

// ClassName(const ClassName &obj_name);
// When no copy constructor is found, compiler supplies its own copy constructor

#include <iostream>
using namespace std;
class Number{
  int a;
  public:
    Number(){
        a = 20;
    }
    Number(int num){
        a = num;
    }
     
    Number(Number &obj){
        cout << "Copy Constructor called" << endl;
        a = obj.a;
    }

    // try commenting above copy constructor

    void display(){
        cout << a << endl;
    }
};
int main() {
    
    Number x,y,b;
    x.display();
    Number z(x);
    z.display();
    b = x;         // copy constructor will not be invoked
    Number a = x;  // copy constructor will be invoked
    a.display();
    return 0;
}