// wap to read name, age and salary of 10 employees and store them in a file.
// read and display the information of employees whose salary is greater than 50k

#include <iostream>
#include <fstream>
using namespace std;

class employees{
  char name[20];
  int age;
  float salary;
  public:
    void set(){
      cout << "Name: ";
      cin >> name;
      cout << "Age: ";
      cin >> age;
      cout << "Salary : ";
      cin >> salary;
    }
  
  void display(){
    cout << "Name: " << name << '\t' << "Age: " << age << '\t' << "Salary: " << salary << endl;
  }
  float getSalary(){
    return salary;
  }
};
int main(){
  employees emp;
  ofstream fout("employee.txt" , ios::app);
    if(!fout){
    cerr << "Error opening file\n";
    return 1;
  }
  
  for (int i = 0; i < 10; i++)
  {
    cout << "Enter details for employee #" << i + 1 << endl;
    emp.set();
    fout.write(reinterpret_cast<char*>(&emp), sizeof(employees));
  }
  fout.close();

  // reading
  ifstream fin("employee.txt");
  if(!fin){
    cerr << "Error opening file\n";
    return 1;
  }
  cout << "Employee with salary greater than 50k is : " << endl;
  while(fin.read(reinterpret_cast<char*>(&emp), sizeof(employees))){
    if(emp.getSalary() > 50000){
      emp.display();
    }
  }
  fin.close();
  return 0;
  
}