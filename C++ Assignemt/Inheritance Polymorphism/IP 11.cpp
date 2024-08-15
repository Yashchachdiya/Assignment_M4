/*Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area* breadth
Circle: Pi * Area *Area*/

#include <iostream>
using namespace std;

class Area {
public:
    double area1(double r) 
	{ 
        const double pi = 3.14;
        return pi * r * r;
    }

    double area2(double l, double b) 
	{ 
        return l * b;
    }

    double area3(double b, double h) 
	{ 
        return 0.5 * b * h;
    }
};

main() {
    Area A;
    double r, l, b, h;

    cout << "Enter radius of circle : "<< endl;
    cin >> r;
    cout << "Area of circle : " << A.area1(r) << endl;

    cout << "Enter length and breadth of rectangle : "<< endl;
    cin >> l >> b;
    cout << "Area of rectangle : " << A.area2(l, b) << endl;

    cout << "Enter base and height of triangle : "<< endl;
    cin >> b >> h;
    cout << "Area of triangle : " << A.area3(b, h) << endl;

    return 0;
}
