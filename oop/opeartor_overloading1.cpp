// operator overloading to add two complex numbers

#include <iostream>
using namespace std;

class Complex{
    int real{};
    int imag{};

    public:
        Complex() = default;
        Complex(int a, int b) : real(a) , imag(b) {}

        Complex operator+(Complex& obj){
            Complex result;
            result.real = real + obj.real;
            result.imag = imag + obj.imag;
            return result;
        }
        void display(){
            cout << real << " + " << imag << "i" << endl;
        }
};

int main(){
    Complex c1(2,3), c2(2,3),c3;

    c3 = c1 + c2;       
    // c1 calls the operator function of its class object and takes c2 as a parameter, 
    //by which the operator function returns the object and the result will reflect in the c3 object.

    c3.display();
}
