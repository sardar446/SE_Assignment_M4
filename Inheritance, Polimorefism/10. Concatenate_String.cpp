/* 10.Write a program to concatenate the two strings using Operator Overloading */
#include<iostream>
using namespace std;
class Base
{
	string str1;
	string str2;
	public:
		void get_string()
		{
			cout<<"\n\n\t Enter String 1 : ";
			cin>>str1;
			
			cout<<"\n\n\t Enter String 2 : ";
			cin>>str2;
		}
		
		void put_string()
		{
			cout<<"\n\n\t Concatinated String : "<<str1+str2;
		}
};
main()
{
	Base B;
	
	B.get_string();
	B.put_string();
}
