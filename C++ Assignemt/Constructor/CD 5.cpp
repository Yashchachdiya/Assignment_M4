/*Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene.
*/


#include <iostream>
using namespace std;

class Triangle
 {
private:
    int a;
    int b;
    int c;

public:
    
    Triangle()
	 {
      	
				cout<<"\n\n\t Enter a : ";
				cin>>a;
				cout<<"\n\n\t Enter b : ";
				cin>>b;		
			    cout<<"\n\n\t Enter c : ";
				cin>>c;
			
    }

    void triangleType()
	 {
        if (a == b && b == c)
		 {
            cout << "The triangle is equilateral." << endl;
        }
		 else if (a == b || b == c || a == c) 
	    {
            cout << "The triangle is isosceles." << endl;
        } else {
            cout << "The triangle is scalene." << endl;
        }
    }
};

main() 
{
    
    Triangle T;
    T.triangleType();
}
