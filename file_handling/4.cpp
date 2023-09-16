// for characeter input/output with file streams the inherited member functions get() and put() from the stream
// classes 'istream' and 'ostream' can be used in the same way as the console input/output
// actually, the stream member functions get() and put() are designedto read and display a character at a time.
// get() is used to read a single character from the file
// put() is used to write a single character to the file

// A program that uses get() and put();

#include <iostream>
#include <fstream>
#include <cstring> // for strlen()

int main(){

    char name[32];
    char email[21];

   std::ofstream fout ("4.txt");

   std::cout << "Enter name: ";
   std::cin >> name;

   std::cout << "Enter email: ";
   std::cin >> email;

   for (int i = 0; i < strlen(name); i++)
   {
        fout.put(name[i]);
   }
   
   fout.put('\n');

   for (int i = 0; i < strlen(email); i++)
   {
        fout.put(email[i]);
   }
   fout.put('\n');

   fout.close();
   
   return 0;
}