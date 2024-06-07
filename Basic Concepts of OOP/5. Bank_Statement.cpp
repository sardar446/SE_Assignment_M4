/*5. Data Member: 
-Name of the depositor
 -Account Number 
 -Type of Account 
 -Balance amount in the account 
 
Member Functions 
-To assign values 
-To deposited an amount
 -To withdraw an amount after checking balance 
 -To display name and */
 
 #include<iostream>
 using namespace std;
 
 class bank_account
 {
 	public:
 	string name;
 	int ac_num;
 	string ac_type;
 	int balence;
 	int balence1;
 	int balence2;
 	int deposite_amount;
 	int withdraw_amount;
 	
	public : 
 		void getinfo()
 		{
 			cout<<"\n\n\t enter name of account holder : ";
			cin>>name;
			cout<<"\n\n\t enter account number : ";
			cin>>ac_num;
			cout<<"\n\n\t enter account type : ";
			cin>>ac_type;
			cout<<"\n\n\t enter available amount in bank accout : ";
			cin>>balence;	
		}
		void diposite()
		{
			cout<<"\n\n\t enter diposite amount : ";
			cin>>deposite_amount;
		}
		void d_balence()
		{
		
			balence1=balence+deposite_amount;
			cout<<"\n\n\t available balence : "<<balence1;
		}
		void withdraw()
		{
			cout<<"\n\n\t enter withdraw amount : ";
			cin>>withdraw_amount;
			if(balence>withdraw_amount)
			{
				cout<<"\n\n\t amount withdraw successfully.";
				balence2=balence1-withdraw_amount;
				cout<<"\n\n\t available balence : "<<balence2;
			}
			else
			{
				cout<<"\n\n\t withdraw can't possible because your balence is low.";
			}
		}
		void display_name()
		{
			cout<<"\n\n\t name : "<<name;
			cout<<"\n\n\t available balence : "<<balence2;
		}
		void printinfo()
		{
			cout<<"\n\n\t account name : "<<name;
			cout<<"\n\n\t account number : "<<ac_num;
			cout<<"\n\n\t account type : "<<ac_type;
			cout<<"\n\n\t account balence : "<<balence;
			cout<<"\n\n\t diposite amount : "<<deposite_amount;
			cout<<"\n\n\t withdraw amount : "<<withdraw_amount;
			cout<<"\n\n\t name : "<<name;
			cout<<"\n\n\t balence : "<<balence2;
		}
 };
 main()
 {
 	bank_account obj;
 	obj.getinfo();
 	obj.diposite();
 	obj.d_balence();
 	obj.withdraw();
 	obj.display_name();
 }
