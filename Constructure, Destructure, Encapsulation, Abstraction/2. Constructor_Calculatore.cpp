/*2. Write a program of Addition, Subtraction, Division, Multiplication using 
constructor.*/
#include<iostream>
using namespace std;
class calc
{
	float n1;
	float n2;
	char c;
	
	public:
		calc(int a, int b)
		{
			n1=a;
			n2=b;
		}
		int get_info()
		 {	
		 	cout<<"\n\n\t Press + for Addition ";
		 	cout<<"\n\n\t Press - for Subtraction ";
		 	cout<<"\n\n\t Press * for Multiplication ";
		 	cout<<"\n\n\t Press / for Division ";
		 	
		 	cout<<"\n\n\t Enter Operator : ";
		 	cin>>c;		 	
		 }
		 int put_info()
		 {
		 	if(c=='+')
		 	{
		 		cout<<"\n\n\t Addition : "<<n1+n2;
			}
			else if (c=='-')
			{
				cout<<"\n\n\t Substraction : "<<n1-n2;
			}
			else if (c=='*')
			{
				cout<<"\n\n\t Multiplication : "<<n1*n2;
			}
			else if (c=='/')
			{
				cout<<"\n\n\t divition : "<<n1/n2;
			}
		 }
		
};
main()
{
	float v1, v2;
	
	cout<<"\n\n Number 1 : ";
	cin>>v1;
	
	cout<<"\n\n Number 2 : ";
	cin>>v2;
	
	calc c(v1, v2);
	c.get_info();
	c.put_info();

}
