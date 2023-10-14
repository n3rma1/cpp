#include <iostream>
using namespace std;

class parent{
    public:
         void show(){
            cout << "Parent" << endl;
        }
};

class child : public parent{
    public:
        void show() {
            cout << "Child" << endl;
        }
};
int main(){
    child c;
    parent* p = &c;
    p -> show();
}