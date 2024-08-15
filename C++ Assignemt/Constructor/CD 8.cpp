/*Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation
*/
#include<iostream>
using namespace std;

class student
{
public:
    string name;
    int roll_no;
    student(string n, int r) : name(n), roll_no(r) {}
};

class result
{
public: student *st;
    string classname;
    int marks;
    char grade;
    result(string c, int m, char g, student *s) : classname(c), marks(m), grade(g), st(s) {}
    void print()
    {
  	    cout << "\n Name : " << st->name;
        cout << "\n Roll_no : " << st->roll_no;
        cout << "\n Classname : " << classname;
        cout << "\n Marks : " << marks;
        cout << "\n Grade : " << grade;
       
    }
};

main()
{
    string name;
    int roll_no;
    cout << "\n\n\t Enter name: ";
    cin >> name;
    cout << "\n\n\t Enter roll_no: ";
    cin >> roll_no;
    student S(name, roll_no);

    string classname;
    int marks;
    char grade;
    cout << "\n\n\t Enter classname: ";
    cin >> classname;
    cout << "\n\n\t Enter marks: ";
    cin >> marks;
    cout << "\n\n\t Enter grade: ";
    cin >> grade;
    result R(classname, marks, grade, &S);
    R.print();

    
}
