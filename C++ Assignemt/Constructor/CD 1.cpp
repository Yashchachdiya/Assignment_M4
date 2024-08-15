/*
Write a programto find the multiplication values and the cubic values using
inline function */



#include<iostream>
using namespace std;

class Cube
{
	int a;
	int b;	
	public :
			void get_n(int num1,int num2)
			{
					a=num1;
					b=num2;
					
			}
			
			inline int find_multiplication()
			{
				return a*b;	
			}
			inline int find_cube()
			{
				return a*a*a;	
			}	
};

main()
{
	Cube C;
	C.get_n(2,6);
	int mul=C.find_multiplication();
	cout<<"\n\n\t multiplication = "<<mul;
	int cb=C.find_cube();
	cout<<"\n\n\t cube = "<<cb;
}
