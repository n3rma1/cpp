#include <iostream>
using namespace std;

template <class T>
class Number{
  private:
    T num;
  public:
    Number(T n) : num(n){} 

    T getNum(){
      return num;
    }
};

int main(){
  Number<int> numberInt(4);

  Number<double> numberDouble(3.3);

  cout << "int Number = " << numberInt.getNum() << endl;
  cout << "double Number = " << numberDouble.getNum() << endl;
  return 0;
}