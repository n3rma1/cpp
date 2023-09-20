#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int *p = arr;               // p points to the first element of arr

    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "arr = " << arr << endl;
    cout << "*arr = " << *arr << endl;
    cout << "**&p = " << **&p << endl;

    cout << "***Pointer to a whole array***\n";
    int(*ptr)[5] = &arr;        // ptr is a pointer to a whole array of 5 integers
    cout << "ptr = " << ptr << endl;
    cout << "Address of first element of array -> *ptr = " << *ptr << endl;
    cout << "first element of array = " << **ptr << endl;
    cout << "Address of second element of array -> *ptr + 1 = " << *ptr + 1 << endl;
    cout << "second element of array = " << *(*ptr + 1) << endl;


    // what is the difference between pointer to a whole array and pointer to an array?
    // pointer to a whole array points to the whole array and pointer to an array points to the first element of the array
    // What is the use case?
    // pointer to a whole array is used when you want to pass the whole array to a function
    // pointer to an array is used when you want to pass the array to a function and you want to modify the array in the function
    // demonstrate using example
    cout << "\n\n****Demonstrating the difference between pointer to a whole array and pointer to an array****";
    cout << "\n\nUsing pointer to a whole array";
    int(*ptr1)[5] = &arr;
    cout << "\nBefore modification : ";
    for (int i = 0; i < 5; i++){
        cout << *(*ptr1 + i) << " ";
    }
    cout << "\nAfter modification : ";
    for (int i = 0; i < 5; i++){
        *(*ptr1 + i) = *(*ptr1 + i) + 1;
        cout << *(*ptr1 + i) << " ";
    }   
    cout << "\n\nUsing pointer to an array";
    int *ptr2 = arr;
    cout << "\nBefore modification : ";
    for (int i = 0; i < 5; i++){
        cout << *(ptr2 + i) << " ";
    }
    cout << "\nAfter modification : ";
    for (int i = 0; i < 5; i++){
        *(ptr2 + i) = *(ptr2 + i) + 1;
        cout << *(ptr2 + i) << " ";
    }
    cout << "\n\n*****End of demonstration*****\n\n";
    
}