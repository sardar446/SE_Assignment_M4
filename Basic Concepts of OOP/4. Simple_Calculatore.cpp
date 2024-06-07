#include<iostream>
// 4. WAP to create simple calculator using class.
using namespace std;
class Calc
{
		int n1, n2;
		char c;
		
		public:
			void get_data()
			{
				cout<<"\n\n\t Enter Number 1 : ";
				cin>>n1;
				
				cout<<"\n\n\t Enter Number 2 : ";
				cin>>n2;
				
				cout<<"\n\n\t Press + for Addition ";
				cout<<"\n\n\t Press - for Addition ";
				cout<<"\n\n\t Press * for Addition ";
				cout<<"\n\n\t Press / for Addition ";
				
				cout<<"\n\n\t Enter Operator : ";
				cin>>c;
			}
			void print_data()
			{
				if(c=='+')
				{
					cout<<"\n\n\t Addition : "<<n1+n2;
				}
				else if(c=='-')
				{
					cout<<"\n\n\t Subtraction : "<<n1-n2;
				}
					else if(c=='*')
				{
					cout<<"\n\n\t Multiplication : "<<n1*n2;
				}
					else if(c=='/')
				{
					cout<<"\n\n\t Division : "<<n1/n2;
				}
			}
};

main()
{
	Calc C;
	
	C.get_data();
	C.print_data();
}
