// It overloads the function-call operator () and allows us to use an object like a function.



#include <iostream>
#include <vector>                   // for vectors
#include <algorithm>                // for sort
#include <functional>            // for std. functors greater
using namespace std;

class Greet{
    public:
        // overload function call operator
        void operator()(){
            cout << "Hello" << endl;
        }
};
class Add{
    public:
         // overload function call operator
         // accept two integer arguments
         // return their sum
        int operator()(int x, int y){
            return x+y;
        }
};

class addNumber{
    private:
        int i_num;
    public:
        // constructor to initialize member variable
        addNumber(int x ) : i_num(x){}

        // takes single parameter and add with member variable
        int operator()(int num){
                return i_num + num;
        }

};

class Even_counter{
    public:
        bool operator()(int n){
            return n % 2 == 0;
        }
};
int main(){
    Greet greet;
    greet();                      // call the great object  || also -> greet.operator()();
                       
    Add add;                  
    int sum = add(5,4);           // call the add object
    cout << "5 + 4 = " << sum << endl;

    addNumber addnumber(23);             // initialize member variable of object with value 23
    int f_num = addnumber(2);           // call addnumber object 2 as argument
    cout << "23 + 2 = " << f_num << endl;
    
    vector<int> v {2,5,1,6,8,9,5,4,12,0};
    sort(v.begin(), v.end());

    cout << "sorting in ascending order: " ;

    for(auto num : v){
        cout << num << " ";
    }

    cout << endl << "Sorting in descending order: ";

    sort(v.begin(),v.end(),greater<int>());       // since v is integer vector so used <int> instead of <T>
    for(auto num : v){
        cout << num << " ";
    }
    
    Even_counter evencounter;
    vector<int> num {1,2,3,4,5};
    int even_nums = count_if(num.begin(),num.end(),evencounter);
    cout << endl <<"Total even numbers are: " << even_nums;
}