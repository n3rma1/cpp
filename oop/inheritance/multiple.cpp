// multiple inheritance is when a class inherits the property from more than one class

#include<iostream>
 
using namespace std;
 
class Human{
 public:
    Human(){
        cout << "He is human\n";
    }
 
 
};
class Man{
    public:
        Man(){
            cout << "He is a man\n";
        }
};

class Person : public Human , public Man{
    public:
        Person(){
            cout << "His name is Mark\n";
        }
};
int main()
{
    Person p1;
    return 0;
}