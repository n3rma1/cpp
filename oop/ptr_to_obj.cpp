// pointer to an object

#include <iostream>
using namespace std;

class Employee{

    private:
        char name[25];
        float salary;

    public:
        void getdata(){
            cout << "\nEnter name: ";
            cin >> name;
            cout << "Enter salary: ";
            cin >> salary;
        }
    
    void showdata(){
        cout << "\nName: " << name << endl;
        cout << "Salary: " << salary;
    }
};

int main(){
    Employee *eptr;
    Employee e;
    eptr = &e;
    eptr ->getdata();            // or (*eptr).member;
    cout << "\nAccessing data through pointer variable: ";
    (*eptr).showdata();
    return 0;
}
