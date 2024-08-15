/*Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.
*/

#include <iostream>
using namespace std;

class BankAccount 
{
private:
    int accountNumber;
    double balance;

public:
    
    BankAccount(int accountNum = 0, double Balance = 0)
    {
        accountNumber = accountNum;
        balance = Balance;
    }

    
    void deposit(double amount) 
	{
        if (amount > 0) 
		{
            balance += amount;
            cout << "\n\n\t Deposit successful. New balance : " << balance ;
        } 
		else 
		{
            cout << "\n\n\t Invalid deposit amount." ;
        }
    }
    void withdraw(double amount) 
	{
        if (amount > 0 && amount <= balance) 
		{
            balance -= amount;
            cout << "\n\n\t Withdrawal successful. New balance : " << balance ;
        } else if (amount > balance) 
		{
            cout << "\n\n\t Insufficient funds." ;
        } else 
		{
            cout << "\n\n\t Invalid withdrawal amount." ;
        }
    }

    
    void display() 
	{
        cout << "\n\n\t Account Number : " << accountNumber ;
        cout << "\n\n\t Balance : " << balance ;
    }
};

main() 
{
    
    BankAccount B(4829, 10000.0);
	cout << " Account Information:" ;
    B.display();
    cout << "\n\n\t Deposit 5000 " ;
    B.deposit(5000.0);
    cout << "\n\n\t Withdraw 2020 " ;
    B.withdraw(2020.0);
    cout << "\n\n\t Updated Account Information :" ;
    B.display();

    
}
