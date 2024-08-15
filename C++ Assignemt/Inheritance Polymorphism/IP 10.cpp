//Write a program to concatenate the two strings using Operator Overloading
#include <iostream>
#include <cstring>
using namespace std;

class String 
{
private:
    char str[20];

public:
    void input() 
	{
        cin >> str;
    }

    void display() 
	{
        cout << str << endl;
    }

    String operator+(const String &s) 
	{
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }
};

main() 
{
    String s1, s2, s3;

    cout << "Enter string 1: ";
    s1.input();
    s1.display();

    cout << "Enter string 2: ";
    s2.input();
    s2.display();

    s3 = s1 + s2;
    cout << "concatenate String: ";
    s3.display();

}
