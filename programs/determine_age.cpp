#include <iostream>

using namespace std;

class Age{
    private:
    unsigned int year{};
    unsigned int month{};
    unsigned int day{};
    public:
    Age(){}
    Age(int y, int m, int d): year(y), month(m),day(d){}
    
    void calculate(Age c, Age b){
        if(c.day < b.day){
            c.month--;
            c.day += 30;
        }
        if(c.month < b.month){
            c.year--;
            c.month +=12;
        }
        if(c.year < b.year){
            cout <<"Invalid date(future date) "  << endl;
            exit(1);
        }
        year = c.year - b.year;
        month = c.month - b.month;
        day = c.day - b.day;
    }
    void display(){
        cout << "Your age is: " << endl;
        cout << year << ":" << month << ":" << day;
    }
};
int main(){
    Age born_date(2004,3,14);
    Age current(2023,9,11);
    Age age;
    age.calculate(current, born_date);
    age.display();
    
}