#include<iostream>
using namespace std;
template<class T>
void swapping(T x, T y)
{
	T temp;	
	
	temp=x;
	x=y;
	y=temp;
	
	cout<<"\n\n\t After Swapping ... ";
	cout<<"\n\n\t x = "<<x;
	cout<<"\n\n\t y = "<<y;	
}
main()
{
	float a, b;	
	cout<<"\n\n\t Input First Number : ";
	cin>>a;
	
	cout<<"\n\n\t Input Two Number : ";
	cin>>b;
	
	cout<<"\n\n\t Before Swapping ... ";
	cout<<"\n\n\t x = "<<a;
	cout<<"\n\n\t y = "<<b;
	
	swapping(a, b);
}
