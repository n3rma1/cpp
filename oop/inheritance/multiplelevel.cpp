// multilevel inheritance has parent-child-grandchild relationship

#include<iostream>
 
using namespace std;
 
class person{
    private:
        string name;
        string address;
    public:
        void getdata(){
            cout << "\nEnter name: ";
            cin >> name;
            cout << "\nEnter address: ";
            cin >> address;
        }
        void showdata(){
            cout << "\nName: " << name;
            cout << "\nAddress: " << address;
        }
};

class employee : public person{
    private:
        int emp_id;
        float salary;
    public:
        void getdata(){
            person :: getdata();
            cout << "Enter employee id: ";
            cin >> emp_id;
            cout << "Enter salary : " ;
            cin >> salary;
        }
        void showdata(){
            person::showdata();
            cout << "\nEmployee id: " << emp_id;
            cout << "\nSalary: " << salary;
        }
};

class manager : public employee{
    private:
        char hidegree;
    public:
        void getdata(){
            employee::getdata();
            cout << "Enter highest degree: ";
            cin >> hidegree;
        }
        void showdata(){
            employee::showdata();
            cout << "\nHighest degree: " << hidegree;
        }
};
int main()
{
    manager mgr;
    cout << "\nEnter data on manager ";
    mgr.getdata();

    cout << "\nData on manager ";
    mgr.showdata();
    return 0;
}