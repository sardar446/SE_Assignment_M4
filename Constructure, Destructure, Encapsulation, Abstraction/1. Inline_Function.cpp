#include<iostream>
/* 1. Write a programto find the multiplication values and the cubic values using
inline function. */
using namespace std;
class Math
{
	int a;
	int b;
	
	public:
	
inline void into(int x, int y)
{
	a=x;
	b=y;
	cout<<"\n\n square : "<< a*b;
}
inline void cube(int x)
{
	a=x;
	cout<<"\n\n cube : "<< a*a*a;
}
inline void print(int v)
{
	a=v;
	cout<<"\n\n n : "<<a;
}
};
main()
{
	Math m;
	int v1, v2;
	
	cout<<"\n\n Enter Number 1 : ";
	cin>>v1;
	
	cout<<"\n\n Enter Number 2 : ";
	cin>>v2;
	
	m.into(v1,v2);
	m.cube(v1);
}
