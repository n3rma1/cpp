// object as function argument

#include <iostream>
using namespace std;

class Complex{
    private:
        float real,imag;
    
    public:
        void getValue(){
            cout << "Enter real part: ";
            cin >> real;
            cout << "Enter imaginary part: ";
            cin >> imag;
        }
    
    void showValue(){
        cout << "("<<real <<"," << imag << ")";
    }

    void add(Complex& cc1, Complex& cc2){
        real = cc1.real + cc2.real;
        imag = cc1.imag + cc2.imag;
    }
};

int main(){
    Complex c1,c2,c3;
    c1.getValue();
    c2.getValue();
    c3.add(c1,c2);
    c1.showValue();
    cout << " + ";
    c2.showValue();
    cout << " = ";
    c3.showValue();
    return 0;
}