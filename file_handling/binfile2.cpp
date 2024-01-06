// array

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int a[] = {1, 2, 3, 4, 5};

  ofstream fout("file2.dat", ios::binary);
  if (fout)
  {
    fout.write(reinterpret_cast<char *>(a), sizeof(a));
    fout.close();
  }
  else
    cout << "error\n";

  ifstream fin("file2.dat", ios::binary);
  if (fin)
  {
    int b[5];
    fin.read(reinterpret_cast<char *>(b), sizeof(b));
    fin.close();
    for (auto i : b)
    {
      cout << i << " ";
    }
  }
  else
    cout << "error\n";
}