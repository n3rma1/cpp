// adding two numbers using function template

#include <iostream>
using namespace std;

template <typename T>
T add(T num1, T num2){
  return num1 + num2;
}

int main(){
  int result;
  double result2;

  result = add<int>(2,3);
  cout << "2 + 3 = " << result << endl;

  result2 = add<double>(2.2, 3.3);
  cout << "2.2 + 3.3 = " << result2 << endl;
  
  return 0;
}