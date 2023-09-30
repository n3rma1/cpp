// implementation of bubble sort using template
#include<iostream>
using namespace std;

template <typename T>
void bubblesort(T a[],int n){
    for (int  i = 0; i < n - 1; i++)
    {
        for (int j = n-1; i < j; j--)
        {
            if(a[j] < a[j - 1])
                swap(a[j] , a[j - 1]);
        }
        
    }
    
}

int main(){
    int a[5] = {10, 20, 40, 50, 30};
    int n = sizeof(a) / sizeof(a[0]);
    
    // calls template function
    bubblesort<int>(a,n);

    cout << "Sorted aray: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " " ;
 
    return 0;
    
}