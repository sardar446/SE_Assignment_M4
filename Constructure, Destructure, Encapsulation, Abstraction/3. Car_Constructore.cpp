#include<iostream>
using namespace std;
/* 3. Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.*/
class Car
{
	string company;
	string model;
	int year;
	
	public: 
		Car(string a,string b, int c )
		{
			company = a;
			model = b;
			year = c;
		}
		void get_info()
		{
			cout<<"\n\n\t Enter Car's Company Name : ";
			cin>>company;
			
			cout<<"\n\n\t Enter Car's Model Name : ";
			cin>>model;
			
			cout<<"\n\n\t Enter Car's Manufacture Year : ";
			cin>>year;
		}
		void put_info()
		{
			cout<<"\n\n Company Name : "<<company;
			cout<<"\n\n Model Name : "<<model;
			cout<<"\n\n Manufacture Year : "<<year;
		}
		
};
main()
{
	string m1;
	string m2;
	int m3;
	Car C(m1, m2, m3);
	
	C.get_info();
	C.put_info();
}
