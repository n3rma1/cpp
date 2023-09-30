#include<iostream>
 
using namespace std;
 
class Student{
    private:
        string name;
        int id;
 
    public:
        void setdata(){
            cout << "Enter name: ";
            cin >> name;
            cout << "ENter id: ";
            cin >> id;
        }
        void getdata(){
            cout << "Name: " << name << endl;
            cout << "id: " << id << endl;
        }
};
int main()
{
    Student *ptr = new Student[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "For student " << i + 1 << endl;
        ptr[i].setdata(); 
    }
    cout << "\nData of students: \n";
    for (int i = 0; i < 3; i++)
    {  
        ptr[i].getdata(); 
    }
    
    delete[] ptr;
    return 0;
}