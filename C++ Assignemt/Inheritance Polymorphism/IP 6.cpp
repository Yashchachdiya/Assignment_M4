#include <iostream>
using namespace std;

class parent 
{
private:
    int privateVariable; 

protected:
    int protectedVariable; 

public:
    int publicVariable;

    parent() 
	{
        privateVariable = 120;
       
    }

    void display() 
	{
        cout << "Private : " << privateVariable << endl;
        cout << "Protected : " << protectedVariable << endl;
        cout << "Public : " << publicVariable << endl;
    }
};

class game : public parent 
{
public:
    void getdisplay() 
	{
        
        publicVariable = 58;
        protectedVariable = 38;
        display();
    }
};

main() 
{
    game G;
    G.getdisplay();

}
