/*2. Define a class to represent a bank account. Include the following members:
3. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/



#include<iostream>
using namespace std;

class bank_account
{

	private :
			      // data members.
			string Name_of_the_depositor;
			int Account_Number;
			string Type_of_Account;
			int Balance_amount_in_the_account;
			int deposite_amount;
			int New_Balance_amount_in_the_account;
			int withdraw_amount;
			int after_withdraw_Balance_amount_in_the_account;
	public :
			void get_bank_datail()   //member function(method)
			{
				cout<<"\n\n\n\t Enter Name of the depositor: ";
				cin>>Name_of_the_depositor;
				cout<<"\n\n\t Enter Account Number : ";
				cin>>Account_Number;
				cout<<"\n\n\t Enter Type of Account : ";
				cin>>Type_of_Account;
				cout<<"\n\n\t Enter Balance amount in the account : ";
				cin>>Balance_amount_in_the_account;
			}
	
			void print_assign_values()       //member function(method)
			{
				cout<<"\n\n\t Name of the depositor : "<<Name_of_the_depositor;
				cout<<"\n\n\t Account Number : "<<Account_Number;
				cout<<"\n\n\t Type of Account : "<<Type_of_Account;
				cout<<"\n\n\t Balance amount in the account : "<<Balance_amount_in_the_account;
			}
		void  deposited_an_amount()
		 {
           cout<<"\n\n\n\t Enter Enter deposite amount: ";
				cin>>deposite_amount;
				if(deposite_amount>0)
				{
					cout<<"\n\n\n\t deposite amount credited successfully ";
					New_Balance_amount_in_the_account=Balance_amount_in_the_account+deposite_amount;
					cout<<"\n\n\t Carente Balance amount  : "<<New_Balance_amount_in_the_account;
				}
				else
									cout<<"\n\n\n\t deposite amount not credite ";

			}
			void   withdraw_an_amount()
		 {
           cout<<"\n\n\n\t Enter Enter withdraw amount: ";
				cin>>withdraw_amount;
				if(withdraw_amount<=Balance_amount_in_the_account)
				{
	
					after_withdraw_Balance_amount_in_the_account=New_Balance_amount_in_the_account-withdraw_amount;
					cout<<"\n\n\t Carente Balance amount : "<<after_withdraw_Balance_amount_in_the_account;
				}
				else
				cout<<"\n\n\n\t incficient balance";

			}
};


main()
{
	bank_account B;
	
	cout<<"\n\n\t Enter details  ------------";
	B.get_bank_datail();
	B.print_assign_values();
	B.deposited_an_amount();
	B.withdraw_an_amount();
	
	
}
