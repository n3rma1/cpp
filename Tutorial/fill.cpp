// fill() = fills a range of elements with a specified value
// fill(begin, end, value);

#include <iostream>
using namespace std;

int main(){
    const int size = 10;
    std::string animals[size];

    fill(animals, animals + size, "cats");

    for(std::string animal : animals){
        cout << animal << "\n";
    } 

    cout << endl;

    std::string foods[size];
    fill(foods, foods + (size)/2, "burger");
    fill(foods+ (size)/2 , foods + size, "pizza");
    for(std::string food : foods ){
        cout << food << endl;
    }
}
