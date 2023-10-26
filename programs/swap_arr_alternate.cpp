// to swap the alternate elements of array

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    for (int i = 0; i < size; i += 2)
    {
        if (arr[i + 1] < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}