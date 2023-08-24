#include <iostream>
#include <string>
using namespace std;

class Demo{
    public: 
    string demo_name;
    int demo_id;

    void printname(); // not defined inside the class defination

    void printid(){
        cout << "Demo id is: " << demo_id;
    }
};

void Demo::printname(){
    cout << "Demo name is: " << demo_name;
}

int main()
{
    Demo obj1;
    obj1.demo_name = "Random";
    obj1.demo_id = 123;

    obj1.printname();
    cout << endl;

    obj1.printid();

    return 0;
}