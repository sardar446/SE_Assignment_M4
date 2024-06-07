#include<iostream>
/* 6. Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.*/

using namespace std;

class Circle
{
	float pi=3.14, r;
	
	public :
		void get_data()
		{
			cout<<"\n\n\t Enter Circle Redius : ";
			cin>>r;
		}
		void print_data()
		{
			cout<<"\n\n\t Circle Circumference : "<<2*pi*r;
			cout<<"\n\n\t Circle Area : "<<pi*r*r;
		}
};
main()
{
	Circle C;
	
	C.get_data();
	C.print_data();
}


