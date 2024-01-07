// to find the largest number from the list of given numbers using classs template

#include <iostream>
using namespace std;

template <class T>
class test{
  T a[10], l;
  public:
    test();
    void large();
    void display();
};
template<class T>
test<T>::test(){
  cout << "Enter numbers: \n";
  for(int i = 0; i < 5; i++){
    cin >> a[i];
  }
}

template<class T>
void test<T>::large(){
  l = a[0];
  for(int i = 0; i < 5; i++){
    if(l > a[i]){
      l = a[i];
    }
  }
}

template <class T>
void test<T>:: display(){
  cout << "The largest number is : " << l << endl;
}

int main(){
  test<int> t1;
  test<float> t2;
  t1.large();
  t2.large();
  t1.display();
  t2.display();
  
  return 0;
}