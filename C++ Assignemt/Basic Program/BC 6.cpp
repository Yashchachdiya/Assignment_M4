//6. Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.





#include<iostream>
using namespace std;

class Person
{

	private :
			        
			string Person_name;
			int Person_age;
			string Person_country;
			
	public :
			void get_Person()   
			{
				cout<<"\n\n\n\t Enter Person_name : ";
				cin>>Person_name;
				cout<<"\n\n\t Enter Person_age : ";
				cin>>Person_age;
				cout<<"\n\n\t Enter Person_country : ";
				cin>>Person_country;
			}
	
			void print_Person() //member function(method)
			{
				cout<<"\n\n\t Person Name : "<<Person_name;
				cout<<"\n\n\t Person Age : "<<Person_age;
				cout<<"\n\n\t Person Country : "<<Person_country;
		
			}
		
};


main()
{
	Person P1, P2;
	
	cout<<"\n\n\t Enter details for Person ------------";
	P1.get_Person();
	P2.get_Person();
	
	cout<<"\n\n\t Print the details of Person -----------";
	P1.print_Person();
	P2.print_Person();
}
