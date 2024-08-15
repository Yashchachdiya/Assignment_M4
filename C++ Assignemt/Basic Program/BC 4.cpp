/*4. Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference. */



#include<iostream>
using namespace std;

class Circle 
{
	private :
			int rad;
			float pi;
			
	public :
			void get_data()
			{
				pi=3.14;
				cout<<"\n\n\t Enter radious : ";
				cin>>rad;	
			}
			
			void area_circle()
			{
				cout<<"\n\n\t Area of Circle : "<<pi*rad*rad;	
			}	
			
			void circumference()
			{
				cout<<"\n\n\t circumference of Circle : "<<2*pi*rad;
			}
};

main()
{
	Circle C;
	C.get_data();
	C.area_circle();
	C.circumference();
}
