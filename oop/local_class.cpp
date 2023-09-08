#include <iostream>
using namespace std;

void func(){
    class test{
        public:
            test(){

                cout << "local class called";
            }
    };
    test t1;
}
int main(){

    func();
}