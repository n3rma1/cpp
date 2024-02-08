// class type to basic type conversion
// using type casting
#include <iostream>
using namespace std;

class measure
{
  int feet, inches;

public:
  measure(int feet, int inches)
  {
    this->feet = feet;
    this->inches = inches;
  }
  operator float()
  {
    return feet * 12 + inches;
  }
};
int main()
{
  measure m(1, 2);
  float val = m;
  cout << val;
  return 0;
}