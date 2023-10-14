#include<iostream>
 
using namespace std;
 
class Engine{
    public:
        Engine(){
            cout << "Engine started!" << endl;
        }
        void start_engine(){
            cout << "Engine started" << endl;
        }
        ~Engine(){
            cout << "Engine destroyed!" << endl;
        }

};
class Car{
    private:
        Engine engine; // composition
    public:
    Car(){
            cout << "Car started!" << endl;
        }
        void start_car(){
            engine.start_engine();
        }
        ~Car(){
            cout << "Car destroyed!" << endl;
        }
 
};
int main()
{
    {
    Car car;
    car.start_car();    // Starts the car's engine.
    // When the Car object is destroyed, the Engine object is also destroyed.
    }
    return 0;
}