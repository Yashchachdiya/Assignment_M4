/*. Write a program of Addition, Subtraction, Division, Multiplication using
constructor.*/
#include<iostream>
using namespace std;

class Calc
{
	int x, y;
	
	public :
			Calc(int a, int b) 
			{
				x=a;
				y=b;
			}
			
			int add()
			{
				return x+y;
			}
			
			int sub()
			{
				return x-y;
			}
			
			int mul()
			{
				return x*y;
			 } 
			
			int div()
			{
				return x/y;
			 } 
};

main()
{
	int a, b;
	
	cout<<"\n\n\t Enter Number 1 = ";
	cin>>a;
	cout<<"\n\n\t Enter Number 2 = ";
	cin>>b;
	
	Calc C(a, b);
	
	int choice;
	
	cout<<"\n\n\t Press 1 for Addition";
	cout<<"\n\n\t Press 2 for Subtraction";
	cout<<"\n\n\t Press 3 for Multiplication";
	cout<<"\n\n\t Press 4 for Division";
	
	cout<<"\n\n\n\t Enter your choice : ";
	cin>>choice;
	
	switch(choice)
	{
		case 1 : 
				cout<<"\n\n\t Addition : "<<C.add();
				break;
				
		case 2: 
				cout<<"\n\n\t Subtraction : "<<C.sub();
				break;
				
		case 3: 
				cout<<"\n\n\t Multiplication : "<<C.mul();
				break;
				
		case 4 : 
				 cout<<"\n\n\t Division : "<<C.div();
				 break;
				 
		default :
				cout<<"\n\n\t Invalid choice !!!!";
				break;
	
	}
	
	
	
	
	
	
	
	
	
}
