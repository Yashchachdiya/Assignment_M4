/*Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor*/

#include <iostream>
using namespace std;

class Employee 
{

    string name;
    int employeeID;
    int salary;

public:

    Employee(string n, int id) 
	{
        name = n;
        employeeID = id;
        
    }
    void Salary(int performance) 
	{
        if (performance >= 4.0) 
		{
            salary = 50000.0; 
        } 
		else if (performance >= 3.0) 
		{
            salary = 40000.0; 
        } else if (performance >= 2.0) 
		{
            salary = 30000.0; 
        } 
		else 
		{
            salary = 20000.0;
        }
    }
    void display() 
	{
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary :" << salary << endl;
    }
};
main() 
{
    
    Employee E("Deep shah", 7382643);
    int performance;
    cout << "Enter employee performance  (1-5): ";
    cin >> performance;
    E.Salary(performance);
    E.display();
}
