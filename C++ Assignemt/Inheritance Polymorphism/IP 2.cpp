// Write a C++ Program to find Area of Rectangle using inheritance


#include<iostream>
using namespace std;

class Rect
{
	protected:
	int len, wid;
	
	public :
			void get_rect()
			{
				cout<<"\n\n\t Enter Length & Width for Recntagle : ";
				cin>>len>>wid;	
			}
				
};

class Area : public Rect
{
	public :
			void print_area()
			{
				cout<<"\n\n\t Length : "<<len;
				cout<<"\n\n\t Width : "<<wid;
				
				cout<<"\n\n\t Area of Rectangle : "<<len*wid;
			}
};

main()
{
	Area R;
	
	R.get_rect();
	R.print_area();
}
