// count total no. of positive, negative or zero numbers in n number of array
// using vector
// using dynamic array in 3.cpp

#include<iostream>
 
using namespace std;
 
class Demo{
 private:
    int n;
    int *p;

    public:
        void getnumbers(){
            cout << "Enter no. of elements: ";
            cin >> n;
            p = new int[n];
            cout << "Enter the numbers: ";
            for (int i = 0; i < n; i++)
            {
                cin >> p[i];
            }
            
        }
         void count(){
    int pos = 0 ;int neg = 0 ;int zero = 0;

    for(int i = 0; i < n; i++){
        if(p[i] > 0) pos++;
        else if(p[i] < 0) neg ++;
        else zero++;
    }
    cout << pos<<  " " << " " <<  neg << " " << zero;
 }

 
 
};
int main()
{
    Demo d;
    d.getnumbers();
    d.count();
    return 0;
}