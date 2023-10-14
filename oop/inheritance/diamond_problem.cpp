// this is diamond problem 
// its solution is to use virtual keyword refer to -> diamond_prob_sol.cpp for this

#include<iostream>
using namespace std;
 
class B
{
protected:
    int count;
public:
    B() {count = 0;}
};
 
class D1:  public B
{
public:
    int sep;
};
 
 
class D2:  public B
{
public:
    int set;
};
 
class DD: public D1, public D2
{
public:
    void show()  {   cout << count;  }
};
 
int main(void)
{
    DD d;
    d.show();
    return 0;
}