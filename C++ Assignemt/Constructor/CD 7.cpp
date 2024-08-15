/* Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid*/

#include <iostream>
using namespace std;

class Date 
{

    int day;
    int month;
    int year;

public:
    Date(int d = 1, int m = 1, int y = 1857) 
	{
        setDay(d);
        setMonth(m);
        setYear(y);
    }

    void setDay(int d) 
	{
        if (d >= 1 && d <= 31) 
		{
            day = d;
        } else 
		{
            cout << "Invalid day. Day must be between 1 and 31." << endl;
            day = 1;
        }
    }

    void setMonth(int m) 
	{
        if (m >= 1 && m <= 12) 
		{
            month = m;
        } 
		else 
		{
            cout << "Month must be between 1 and 12." << endl;
            month = 1;
        }
    }
    void setYear(int y) 
	{
        if (y >= 1857 && y <= 2100) 
		{
            year = y;
        } 
		else 
		{
            cout << "Year must be between 1900 and 2100." << endl;
            year = 1857;
        }
    }
    int getDay() 
	{
        return day;
    }
    int getMonth() 
	{
        return month;
    }
    int getYear() 
	{
        return year;
    }

    
    bool ValidDate() 
	{
        if (month == 2) 
		{
            if (day > 28) 
			{
                return false;
            }
        } 
		else if (month == 4 || month == 6 || month == 9 || month == 11) 
		{
            if (day > 30) 
			{
                return false;
            }
        }
        return true;
    }
    void display() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

main() 
{
    Date D(24, 2, 2024);

    if (D.ValidDate()) 
	{
        D.display();
    } else 
	{
        cout << "Invalid date." << endl;
    }
}
