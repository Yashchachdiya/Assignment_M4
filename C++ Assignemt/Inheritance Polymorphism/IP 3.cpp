/*Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)*/

#include <iostream>
using namespace std;

class person 
{
protected:
    string name;
    int age;

public:
    void inputData() 
	{
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayData() 
	{
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class student : public person 
{
private:
    float percentage;

public:
    void inputData() 
	{
        person::inputData();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void displayData() 
	{
        person::displayData();
        cout << "Percentage: " << percentage << endl;
    }
};

class teacher : public person 
{
private:
    float salary;

public:
    void inputData() 
	{
        person::inputData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayData() 
	{
        person::displayData();
        cout << "Salary: " << salary << endl;
    }
};

main() 
{
    student S;
    cout << "Enter student data:" << endl;
    S.inputData();
    cout << "Student data:" << endl;
    S.displayData();

    teacher T;
    cout << "Enter teacher data:" << endl;
    T.inputData();
    cout << "Teacher data:" << endl;
    T.displayData();
}
