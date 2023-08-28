// Global function as a Friend Function in cpp
// syntax:
// friend return_type func_name(argument)   -> for global function

#include <iostream>
using namespace std;

class demo{
    private:
        int priv_var;
    
    protected:
        int prot_var;
    
    public:
        demo(){
            priv_var = 10;
            prot_var = 20;
        }
        friend void g_func(demo& obj);
};

void g_func(demo& obj){
    cout << obj.priv_var << endl;
    cout << obj.prot_var << endl;
}

int main(){
    demo obj1;
    g_func(obj1);
}