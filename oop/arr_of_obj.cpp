#include <iostream>
using namespace std;

class Test{
    private:
        int data;
    
    public:
        Test(){data = 0;}
        void getdata(){
            cout << "Enter data: ";
            cin >> data;
        }

        void showdata(){
            cout << "Data is: " << data << endl;
        }
};

int main(){
    Test t1[10];
    int i,n;
    cout << "How many data? ";
    cin >> n;

    //read data
    for (int i = 0; i < n; i++)
    {
        cout << "For data: " << i+1 << endl;
        t1[i].getdata();
    }
    
    //display data
    for (int i = 0; i < n; i++)
    {
        cout << "\n*** Data: " << i+1 << "***" <<endl;
        t1[i].showdata();
    }
    
    return 0;
}