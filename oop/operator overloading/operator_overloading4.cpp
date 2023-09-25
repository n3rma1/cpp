// overloading of unary operator -

#include <iostream>
using namespace std;

class vector
{
private:
    int i;
    int j;
    int k;
public:
    vector(int a, int b, int c) : i(a) , j(b) , k(c) {}

    void operator-();
    void display();
};

void vector::operator-(){
    i=-i;
    j=-j;
    k=-k;
}
void vector::display(){
    cout << i << " " << j << " " << k;
}

int main(){
    vector v(1,2,3);
    -v;
    v.display();
}