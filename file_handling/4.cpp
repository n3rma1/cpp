#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string name;
    std::string email;

    std::ofstream fout("4.txt");

    std::cout << "Enter name: ";
    std::getline(std::cin, name);

    std::cout << "Enter email: ";
    std::getline(std::cin, email);

    fout << name << '\n' << email << '\n';

    fout.close();

    return 0;
}
