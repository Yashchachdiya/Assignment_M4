/*Write a C++ Program to illustrates the use of Constructors in multilevel
inheritance*/
#include <iostream>
using namespace std;

class yash 
{
private:
    int privateVariable; 

protected:
    int protectedVariable; 

public:
    int publicVariable; 

    void setPrivateVariable(int val) 
	{
        privateVariable = val;
    }

    void setProtectedVariable(int val) 
	{
        protectedVariable = val;
    }

    void setPublicVariable(int val) 
	{
        publicVariable = val;
    }

    void display() {
        cout << "Private : " << privateVariable << endl;
        cout << "Protected : " << protectedVariable << endl;
        cout << "Public : " << publicVariable << endl;
    }
};

class deep : public yash 
{
public:
    void accessMembers() 
	{
        
        publicVariable = 10;
        protectedVariable = 20;

        display();
    }
};
main() 
{
    deep D;
    D.setPublicVariable(10);
    D.setProtectedVariable(20);
    D.accessMembers();
}
