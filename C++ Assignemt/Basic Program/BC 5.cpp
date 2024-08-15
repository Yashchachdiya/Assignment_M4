/*5. Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.
*/



#include<iostream>
using namespace std;

class Rectangle 
{
	private :
			float l;
			float w;
			
	public :
			void get_data()
			{
				
				cout<<"\n\n\t Enter lenth : ";
				cin>>l;
				cout<<"\n\n\t Enter width : ";
				cin>>w;		
			}
			
			void area_Rectangle()
			{
				cout<<"\n\n\t Area of Rectangle : "<<l*w;	
			}	
			
			void perimeter()
			{
				cout<<"\n\n\t perimeter of Rectangle : "<<2*(l+w);
			}
};

main()
{
	Rectangle R;
	R.get_data();
	R.area_Rectangle();
	R.perimeter();
}
