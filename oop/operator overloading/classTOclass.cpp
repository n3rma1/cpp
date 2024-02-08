// conversion of class type to class type
// constructor as conversion function
#include<iostream>
 
using namespace std;
 
class A{
  int i,j;
  public:
    A(int i, int j){
        this->i = i;
        this->j = j;
    }
    int get_i(){
      return i;
    }
    int get_j(){
      return j;
    }
};
class B{
  int i, j;
  public:
    B(){
      i = 0;
      j = 0;
    }
    B(A aa){
        i = aa.get_i();
        j = aa.get_j();
    }
    void putdata(){
      cout << i << " " << j;
    }
};
int main()
{
    A a(1,2);
    B b = a;          // b => destination && a => source
    b.putdata();
    return 0;
}