/*Write a program to find the max number from given two numbers
using friend function*/
#include <iostream>
using namespace std;

class Maximum 
{
private:
    int a, b;

public:
	
    void input() 
	{
        cout << "Enter two numbers : ";
        cin >> a >> b;
    }

    friend int max(Maximum m);
};

int max(Maximum m) 
{
    return (m.a > m.b) ? m.a : m.b;
}

main() 
{
    Maximum M;
    M.input();
    cout << "Maximum number : " << max(M) << endl;

}
