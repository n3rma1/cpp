// overloading of ++ increment operator

#include <iostream>
using namespace std;

class increment{
private:
    int count;
public:
    increment(): count(5) {}
    void operator++(){
        count = count+1;
    }
    void operator++(int){
        count = count+1;
    }
    void display(){
        cout << "Count: " << count << endl;
    }
};

int main(){
    increment obj;
    ++obj;
    obj.display();
    obj++;
    obj.display();
}
  