#include<iostream>
/* 8. Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables. */

using namespace std;
class Person
{
	string name, country;
	int age;
	
	public :
		void set_data()
		{
			cout<<"\n\n\t ....Scan Details....";
			cout<<"\n\n\t Enter Person Name : ";
			cin>>name;
			
			cout<<"\n\n\t Enter Person Age : ";
			cin>>age;
			
			cout<<"\n\n\t Enter Person Country : ";
			cin>>country;
		}
		void get_data ()
		{
			cout<<"\n\n\t ....Print Details....";
			cout<<"\n\n\t Enter Person Name : "<<name;
			cout<<"\n\n\t Enter Person Age : "<<age;
			cout<<"\n\n\t Enter Person Country : "<<country;
		}	
};
main()
{
	Person P;
	
	P.set_data();
	P.get_data();
}
