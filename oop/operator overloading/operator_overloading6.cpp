#include<iostream>
using namespace std;
 
class Matrix{

    private:
        int a[3][3];
    public:
        void getdata(){
            cout << "Enter the elements of the matrix: " << endl;
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    cin >> a[i][j];
                }
            }
        }
        void display(){
            cout << "The matrix is: " << endl;
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
        }
        Matrix operator+(Matrix m){
            Matrix temp;
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    temp.a[i][j] = a[i][j] + m.a[i][j];
                }
            }
            return temp;
        }
 
};
int main()
{
    Matrix m1,m2,m3;
    m1.getdata();
    m2.getdata();
    m3 = m1 + m2;
    m3.display();
    
    return 0;
}