/*Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables*/
#include<iostream>
using namespace std;

class Car
{
	private :  string company="honda";
	           string model="amez";
               int year;
	
	
	public :
			
			void get_company()
			{
				//company=honda;
				cout<<"\n\n\t company = "<<company;
			}
			
			void get_model()
			{
				//model=amez;
				cout<<"\n\n\t model = "<<model;
			}
				void get_year()
			{
				year=2024;
				cout<<"\n\n\t year = "<<year;
			}
		
};

main()
{
	Car C;
   C.get_company();
   C.get_model();
   C.get_year();
}

