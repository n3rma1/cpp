#include <iostream>
using namespace std;

class Time{
    private:
        int hour{};
        int minute{};
        int second{};
        
    public:
       Time() = default;
      
        Time(int h, int m, int s): hour(h), minute(m), second(s) {}
        
        void calculate(Time tt1, Time tt2){
            hour = tt1.hour + tt2.hour;
            minute = tt1.minute + tt2.minute;
            second = tt1.second + tt2.second;
        }
        void show(){
            cout << "After adding two Times: " << endl;
            cout << hour << ":" << minute << ":" << second;
        }
};
int main(){
    Time t1 (1,2,3);
    Time t2 (1,2,3);
    Time result;
    result.calculate(t1,t2);
    result.show();
}