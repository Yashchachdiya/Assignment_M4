/*.Write a programto swap the two numbers using friend function
without using third variable*/
#include<iostream>
using namespace std;

class Swapping 
{
	int n1, n2;
	
	public :
			void get_number()
			{
				cout<<"\n\n\t n1 = ";
				cin>>n1;
				cout<<"\n\n\t n2 = ";
				cin>>n2;	
			}	
			friend void swap(Swapping S);
			
};

void swap(Swapping S)
{
	int temp;
	temp=S.n1;
	S.n1=S.n2;
	S.n2=temp;
	
	cout<<"\n\n\t n1 = "<<S.n1;
	cout<<"\n\n\t n2 = "<<S.n2;	
}


main()
{
	Swapping S;
	S.get_number();
	swap(S);
}
