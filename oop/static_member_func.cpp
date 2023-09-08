#include <iostream>
using namespace std;

class facto{
    public:
        static int fact(int n){
            if(n<1)
                return 1;
            else
                return n*fact(n-1);
        }
};

int main(){
    int num = 5;
    int result = facto::fact(num);
    cout << "Factorial of " << num << " is " << result;

}
