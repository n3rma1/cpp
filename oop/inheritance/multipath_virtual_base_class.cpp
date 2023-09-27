// Special case of hybrid inhertiance

#include<iostream>
 
using namespace std;
 
class Animal{
 
 public:
 Animal(){
    cout << "From animal class\n";
 }
    void eat(){
        cout << "Animal is Eating\n";
    }
 
};
class Mammal : virtual public Animal{
    public:
    Mammal(){
        cout <<"from mammal class\n";
    }
        void run(){
            cout << "running\n";
        }
};

class Bird : virtual public Animal {
    public:
        Bird(){
            cout << "from bird class\n";
        }
        void fly(){
            cout << "Flying\n";
        }
};

class bat : public Mammal, public Bird{
    public:
    bat(){
        cout << "from bat class\n";
    }
        void showdata(){
            eat();
        }

};
int main()
{
    bat b;
    b.showdata();
    
    return 0;
}