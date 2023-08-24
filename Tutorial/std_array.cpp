#include <iostream>
#include <array> // for array, at()
#include <tuple> // for get()
using namespace std;

int main()
{
    array<int, 6> a = {1,2,3,4,5,6};
    
    //using at();
    cout << "The array elements are (using at()): ";
    for(int i = 0; i < 6; i++){
        cout << a.at(i) << " ";
    }
    cout << endl;
    
    // using get()
    cout << "The array elements are (using get()): ";
    // for(int i = 0; i < 6; i++){
    //     cout << get<i>(a) << " ";
    // }  
    // This can't use use becuase tempelete parameter < > must be known at compile time
    
    cout << get<0>(a) << " " << get<1>(a) << " ";
    cout << get<2>(a) << " " << get<3>(a) << " ";
    cout << get<4>(a) << " " << get<5>(a) << " ";
    cout << endl;
    
  
    //using operator[]
    cout << "The array elements are (using operator[]) : ";
    for ( int i=0; i<6; i++){
    cout << a[i] << " ";
    }
    cout << endl;
 
 
    // front() : returns reference to the first element of array
    // back() : returns reference to the last element of array
    
    
    cout << "First element of array is : ";
    int &first = a.front();
    cout << first << endl;
    
    cout << "Last element of array is : ";
    int &last = a.back();
    cout << last << endl;
    
    // change first and last element using references
    first = 0;
    last = 1;
    
    cout << "array after changing first and last element: ";
    for(auto i : a){
        cout << i << " ";
    }
    cout << endl;
    
    // printing number of array elements
    cout << "The number of array elements is : ";
    cout << a.size() << endl;
    
    //printing max elements array can hold
    cout << "MAX elements array can hold: ";
    cout << a.max_size() << endl;
    
    // empty() : returns true when array size is 0

    array<int,4> ar0;
    ar0.empty() ? cout << "Array ar0 is empty":
        cout << "Array ar0 is not empty";
    cout << endl;

    array<int,0> ar1;
    ar1.empty() ? cout << "Array ar1 is empty":
        cout << "Array ar1not empty";
    cout << endl;

    // fill(): to fill entire array with particular value
    ar1.fill(0);

    cout << "After filling operation: ";
    for(int i : ar1){
        cout << i << " ";
    }

   
    
    return 0;
}