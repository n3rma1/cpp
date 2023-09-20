// count total no. of positive, negative or zero numbers in n number of array
// using vector
// using dynamic array in 4.cpp



#include<iostream>
#include <vector>

using namespace std;
 
class Demo{
 private:
    vector<int> numbers;
    int n;
public:
    void getNumbers(){
        cout << "Enter no. of elements: ";
        cin >> n;
        numbers.resize(n);
        
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }
        
    }
 
 void count(){
    int pos = 0 ;int neg = 0 ;int zero = 0;

    for(int num : numbers){
        if(num > 0) pos++;
        else if(num < 0) neg ++;
        else zero++;
    }
    cout << pos<<  " " << " " <<  neg << " " << zero;
 }
 
};
int main()
{
    Demo d;
    d.getNumbers();
    d.count();
 
    return 0;
}