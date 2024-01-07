#include <iostream>
using namespace std;

int main(){
  int a, b;
  cout << "Enter a and b: ";
  cin >> a >> b;
  int x = a-b;
  try{
    if(x!=0){
      cout << a/x;
    }else 
      throw(x);
  }
  catch(int i){
    cout << "Exception caught";
  }
}