/*Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)
*/


#include<iostream>
using namespace std;

class Students
{
	protected:
	int roll_no;
	
	public :
			void get_roll_no()
			{
				cout<<"\n\n\t Enter roll_no : ";
				cin>>roll_no;
			}
				
};

class test : public Students
{
	protected:
	int sub1,sub2;
	public :
			void print_test()
			{
				cout<<"\n\n\t roll_no : "<<roll_no;
				cout<<"\n\n\t Enter sub 1 : ";
				cin>>sub1;
				cout<<"\n\n\t Enter sub 2 : ";
				cin>>sub2;
				
			
			}
};
class reults : public test
{
	protected:
	int total_marks;
	public :
			void print_reults()
			{
				total_marks=sub1+sub2;
				cout<<"\n\n\t total marks : "<<total_marks;
			
			}
};

main()
{
	reults R;
	R.get_roll_no();
	R.print_test();
	R.print_reults();
}
