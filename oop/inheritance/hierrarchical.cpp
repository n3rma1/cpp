// multiple inheritance is when a class inherits the property from more than one class

#include<iostream>
 
using namespace std;
 
class Human{
 public:
    Human(){
        cout << "Is a human\n";
    }
 
 
};
class Man : Human{
    public:
        Man(){
            cout << "Is a man\n";
        }
};

class Woman : Human{
    public:
        Woman(){
            cout << "Is a woman\n";
        }
};

int main()
{
    Man m1;

    Woman w1;
    return 0;
}