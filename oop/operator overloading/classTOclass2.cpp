// using typecasting
#include <iostream>
using namespace std;
//minutes class
class Minute {

public:
int mins;
	// Constructors
	Minute()
	{
		mins = 0;
	}

	// Function to print the value of
	// hours and minutes
	void show()
	{
		cout << "\nTotal Minute : " << mins << endl;
	}
};

// Time Class
class Time {
	int hr, mins;

public:
	// Constructors
	Time(int h, int m)
	{
		hr = h;
		mins = m;
	}
	Time()
	{
		cout << "\nTime's Object Created";
	}
	operator Minute () //overloading minute class 
	{
		Minute m;
		m.mins = (hr * 60) + mins;
		return m;
	} //driver code

	// Function to print the value of
	// hours and minutes
	void show()
	{
		cout << "Hour: " << hr << endl;
		cout << "Minute : " << mins << endl;
	}
};

// Minutes Class
int main()
{
	Time T1(3,40);
	Minute m;
	m=T1; //minute class is destination and Time class is source class
	T1.show();
	m.show();
	return 0;
}
