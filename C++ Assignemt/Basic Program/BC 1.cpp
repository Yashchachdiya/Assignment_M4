//WAP to create simple calculator using class


#include<iostream>
using namespace std;

class Calculator 
{
	private :
			int n1;
			int n2;
			
	public :
			void get_data()
			{
				
				cout<<"\n\n\t Enter n1 : ";
				cin>>n1;
				cout<<"\n\n\t Enter n2 : ";
				cin>>n2;		
			}
			
			void addition()
			{
				cout<<"\n\n\t addition of two number : "<<n1+n2;	
			}	
			
			void Subtraction()
			{
				cout<<"\n\n\t Subtraction of two number : "<<n1-n2;
			}
			void multiplication()
			{
				cout<<"\n\n\t multiplication of two number : "<<n1*n2;
			}
			void deviation()
			{
				cout<<"\n\n\t deviation of two number : "<<n1/n2;
			}
};

main()
{
	Calculator C;
	C.get_data();
	C.addition();
	C.Subtraction();
	C.multiplication();
	C.deviation();
	
}
