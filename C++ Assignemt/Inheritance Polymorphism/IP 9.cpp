//Write a Program of Two 1D Matrix Addition using Operator Overloading
#include <iostream>
using namespace std;

class Matrix 
{
private:
    int arr[6];

public:
    void input() 
	{
        cout << "Enter 6 elements : ";
        for (int i = 0; i <=6; i++) 
		{
            cin >> arr[i];
            cout << "\n";
        }
        
    }

    void display() 
	{
        cout << "Matrix : ";
        for (int i = 0; i <=6; i++) 
		{
            cout << arr[i];
             cout << "\n";
        }
       
    }

    Matrix operator+(const Matrix &m) 
	{
        Matrix temp;
        for (int i = 0; i <=6; i++) 
		{
            temp.arr[i] = arr[i] + m.arr[i];
            cout << "\n";
        }
        
        return temp;
    }
};

main() 
{
    Matrix M1, M2, M3;

    cout << "Enter elements for Matrix 1 : ";
    M1.input();
    M1.display();

    cout << "Enter elements for Matrix 2 : ";
    M2.input();
    M2.display();

    M3 = M1 + M2;
    cout << "sum of Matrix: ";
    M3.display();

}
