/*

In C++, a constructor is a special member function that is automatically called when an object of a class is created. 
Constructors are used to initialize the object's data members or perform other necessary setup tasks. They have the same 
name as the class and don't have a return type, not even void.

Constructors are particularly useful to ensure that an object starts with valid and well-defined initial values.
 If a class doesn't have a constructor defined explicitly, the compiler provides a default constructor which initializes
  member variables to default values (zero for numeric types, null for pointers, etc.).

*/

#include <iostream>
using namespace std;

class myClass{
    public:
        //default constructors
    myClass(){
        cout << "Default constructor called." << endl;
        value = 0;
    }

    // Parameterized constructor
    myClass(int val){
        cout << "Parameterized constructor called." << endl;
        value = val;
    }

    void display(){
        cout << "Value: " << value << endl;
    }
    
    ~myClass(){
        cout << "Destructor called." << endl;
    }
    private:
        int value;
};

int main(){
    //creating objects using constructors
    myClass obj1;          // calls default constructor
    myClass obj2(42);      // calls parameterized constructor

    obj1.display();     // output: value : 0
    obj2.display();     // output: value: 2

    return 0;
}