#include<iostream>
using namespace std;

class Base 
{
	public :
			Base()
			{
				cout<<"\n\n\t Base class called.";	
			}	
};

class Derived1 : public Base 
{
	public :
			Derived1()
			{
				cout<<"\n\n\t Derived 1 class called.";	
			}	
};
class Derived2 : public Derived1
{
	public:
		Derived2()
		{
		cout<<"\n\n\t Derived 2 class called. ";
		}
};


main()
{
	Derived2 D;
}
