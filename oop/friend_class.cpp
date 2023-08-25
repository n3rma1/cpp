#include <iostream>
using namespace std;

class otherClass{
    private:
        int private_var;

    protected:
        int protected_var;
    
    public:
        otherClass(){
            private_var = 10;
            protected_var = 20;
        }
        friend class F;
};

class F{
    public:
    void display(otherClass& t){
        cout << "Private var = " << t.private_var << endl;
        cout << "Protected var = " << t.protected_var << endl;
    }
};


int main()
{
    otherClass other;
    F f;
    f.display(other);
}