// operator overloading using friend function

#include <iostream>
using namespace std;

class Complex{
    int real{};
    int imag{};

    public:
        Complex() = default;
        Complex(int a, int b) : real(a) , imag(b) {}

       friend Complex operator+(Complex& obj1, Complex& obj2);
        void display(){
            cout << real << " + " << imag << "i" << endl;
        }
};
 Complex operator+(Complex& obj1, Complex& obj2){
            Complex result;
            result.real = obj1.real + obj2.real;
            result.imag = obj1.imag + obj2.imag;
            return result;
        }
int main(){
    Complex c1(2,3), c2(2,3),c3;

    c3 = c1 + c2;       

    c3.display();
}
