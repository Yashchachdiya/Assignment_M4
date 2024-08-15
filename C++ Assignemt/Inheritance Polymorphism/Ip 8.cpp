/*
Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/
#include <iostream>
using namespace std;

class Operations 
{
public:
    
    int add(int a, int b) 
	{
        return a + b;
    }

    float add(float a, float b) 
	{
        return a + b;
    }

   
    int subtract(int a, int b) 
	{
        return a - b;
    }

    float subtract(float a, float b) 
	{
        return a - b;
    }
    int multiply(int a, int b) 
	{
        return a * b;
    }

    float multiply(float a, float b) 
	{
        return a * b;
    }

    
    
    int divide(int a, int b) 
	{
        
        return a / b;
    }

    float divide(float a, float b) 
	{
        
        return a / b;
    }

   
};

main() 
{
    Operations O; 
    cout << "Integer values ";
    cout << "\n\n\taddition: " << O.add(5, 3);
    cout << " \n\n\tsubtraction: " << O.subtract(5, 3) ;
    cout << " \n\n\tmultiplication: " << O.multiply(5, 3);
    cout << " \n\n\tdivision: " << O.divide(6, 3);

    cout << "\n\n Float values ";
    cout << " \n\n\taddition: " << O.add(17.4f, 12.2f) ;
    cout << " \n\n\tsubtraction: " << O.subtract(17.4f, 12.2f) ;
    cout << " \n\n\tmultiplication: " << O.multiply(12.2f,17.4f) ;
    cout << " \n\n\tdivision: " << O.divide(51.8f, 17.4f);

   
}
