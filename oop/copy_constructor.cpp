// copy constructor:

// ClassName(const ClassName &obj_name);  >> const optional
// When no copy constructor is found, compiler supplies its own copy constructor
// try to comment copy constructor and see

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
    cout << "X object: ";
    x.display();
    cout << "z object copy of x: ";
    Number z(x);
    z.display();

    cout << "copy using assignement operator: \n";
    b = x;   // copy constructor will not be invoked
    
    cout << "copy constructor a using Number a = x: \n";      
    Number a = x;  // copy constructor will be invoked
    a.display();

   

    return 0;
}