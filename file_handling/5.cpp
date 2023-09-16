#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream fin("4.txt");
    
    if (!fin) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    std::string name;
    std::string email;

    while (std::getline(fin, name) && std::getline(fin, email)) {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Email: " << email << std::endl;
    }

    fin.close();

    return 0;
}
