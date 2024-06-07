#include<iostream>
using namespace std;
/* 4. Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.*/
class BankAccount
{
	double AccountNumber;
	double Balance;
	double Deposite;
	double Withdraw;
	
	public:
		BankAccount(int a, int b)
		{
			AccountNumber = a;
			Balance = b;
		}
		void get_info()
		{
		cout<<"\n\n\t Enter Account Number : ";
		cin>>AccountNumber;
		
		cout<<"\n\n\t Enter Balance : ";
		cin>>Balance;
		}
		void get_depo()
		{
			cout<<"\n\n\t Enter Amount for Deposite Balance : ";
			cin>>Deposite;
			if(Deposite > 0)
			{
				Balance += Deposite;
				cout<<"\n\n\t After Add Deposite Balance : "<<Balance;
			}
			else 
			{
			
				cout<<"\n\n\t After Add Deposite Balance : "<<Balance;
			}
		}
		
		void get_with()
		{
			cout<<"\n\n\t Enter Amount for Withdraw : ";
			cin>>Withdraw;
			if(Withdraw>0)
			{
				Balance -= Withdraw;
				cout<<"\n\n\t Remaining Balance After Withdraw Balance : "<<Balance;
			}
			else
			{
				cout<<"\n\n\t Remaining Balance After Withdraw Balance : "<<Balance;
			}
		}
};
main()
{
	double b1, b2;
	BankAccount B(b1, b2);
	
	B.get_info();
	B.get_depo();
	B.get_with();	
}
