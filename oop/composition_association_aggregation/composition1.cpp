#include<iostream>
 
using namespace std;
 
class Engine{
    public:
        void start_engine(){
            cout << "Engine started" << endl;
        }
};
class Car{
    private:
        Engine engine; // composition
    public:
        void start_car(){
            engine.start_engine();
        }
 
};
int main()
{
    Car car;
    car.start_car();    // Starts the car's engine.
    // When the Car object is destroyed, the Engine object is also destroyed.
    return 0;
}