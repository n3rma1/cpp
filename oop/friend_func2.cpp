// Member Function of Another Class as Friend Function
// friend return_type class_name::func_name(argument)   - > for member func of another class
#include <iostream>
using namespace std;

// forward declaration needed
class base;
class otherClass{
    public:
    void otherfunc(base& obj);
};

class base{
    private:
        int priv_var;
    
    protected:
        int prot_var;
    
    public:
        base(){
            priv_var = 10;
            prot_var = 20;
        }
        friend void otherClass::otherfunc(base&);
};

 void otherClass::otherfunc(base& obj){
    cout << obj.priv_var << endl;
    cout << obj.prot_var << endl;
}

int main(){
    base obj1;
    otherClass obj2;
    obj2.otherfunc(obj1);
}