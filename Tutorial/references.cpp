/*
    C++ has a separate feature called "references" that allows you to create aliases for 
    variables directly, without explicitly dealing with pointers. 
    However, in C, if you want to achieve similar functionality, 
    you'll need to use pointers.
*/

#include <iostream>
using namespace std;

// void increment(int* value){                      as in C
//     (*value)++;
// }

// in cpp there is feature called reference

void increment(int& value){
    value++;
}
int main(){
    int a = 3;
    // int& ref = a;
    // ref = 4;
    // cout << ref; output : 4 it acts as a name allias for a;
    // increment(&a);
    // cout << a;  output: 4 using pointer in increment pointer as in C
    increment(a);
    cout << a;           //output : 4
}
