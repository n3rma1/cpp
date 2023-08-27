#include <iostream>
using namespace std;

int main(){
    // allocate a single integer dynamically
    int *dynamicInt = new int;
    *dynamicInt = 42;
    cout << "Dynamic integer: " <<*dynamicInt;

    delete dynamicInt;
    
    // for arrays
    cout << "\nDynamic array: " << endl;
    int *dynamicArray = new int[10];
    for (int i = 0; i < 10; i++)
    {
        dynamicArray[i] = i;
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout << *(dynamicArray + i) << " ";
    }
    
    delete[] dynamicArray;
}