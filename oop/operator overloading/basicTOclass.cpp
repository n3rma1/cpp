// conversion of basic type to class type
#include <iostream>
using namespace std;

class measure{
  int feet, inches;
  public:
    measure(int ft, int in):feet(ft), inches(in){}
    void display(){
      cout << feet <<  " " << inches;
    }
};

int main(){
  int feet = 10;
  int inch = 22;
  measure m(feet,inch);
  m.display();
}