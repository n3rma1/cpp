#include <iostream>
using namespace std;

template<typename T>
void swapp(T &x, T &y){
  T temp = x;
  x = y;
  y = temp;
}

int main(){
  int a = 11;
  int b = 22;
  float c = 2.2;
  float d = 3.3;

  cout << "a and b before swapping: \n";
  cout << "a = " << a <<"\t" << "b = "<< b << "\n";
  swapp(a,b);
  cout << "a and b after swapping\n";
  cout << "a = " << a <<"\t" << "b = "<< b << "\n";

   cout << "c and d before swapping: \n";
  cout << "c = " << c <<"\t" << "d = "<< d << "\n";
  swapp(c,d);
  cout << "c and d after swapping\n";
  cout << "c = " << c <<"\t" << "d = "<< d << "\n";


  
}