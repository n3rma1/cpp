// unary operator overloading

#include<iostream>
 
using namespace std;
 
class Demo{
    int x;

    public:
        Demo(int a) : x(a){}

        void operator-(){
            cout << "Before decrementing x: " << x << endl;
            x--;
            cout << "After decrementing x: " << x;
        }
 
};
int main()
{
    Demo d(5);
    -d;
    return 0;
}