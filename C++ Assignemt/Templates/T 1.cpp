//Write a program of to swap the two values using template 

#include<iostream>
using namespace std;

template<class T>
void swapping(T x, T y)
{
	T temp;
	cout<<"\n\n\t Before Swapping -----------";
	cout<<"\n\n\t x = "<<x<<"\n\n\t y = "<<y;
	
	temp=x;
	x=y;
	y=temp;
	
	cout<<"\n\n\t After Swapping -----------";
	cout<<"\n\n\t x = "<<x<<"\n\n\t y = "<<y;
}


main()
{
	float x, y;
	cout<<"\n\n\t Enter x : ";
	cin>>x;
	cout<<"\n\n\t Enter y : ";
	cin>>y;	
	swapping(x, y);
}

