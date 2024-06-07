/* 11.Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area* breadth
Circle: Pi * Area *Area */
#include<iostream>
using namespace std;
class Area 
{
	float pi=3.14;
	float length, breadth, r;
	public: 
		float AreaRectangle(float L, float W)
		{
			length=L;
			breadth=W;
			return length*breadth;
			
		}
		
		float AreaTriangle(float L, float W)
		{
			length=L;
			breadth=W;
			return 0.5*length*breadth;
			
		}
		float AreaCircle(float redius)
		{
			r=redius;
			return pi*r*r;
			
		}
};
main()
{
	float a, b, c;
			cout<<"\n\n\t Enter Rectangle Length : ";
			cin>>a;
			
			cout<<"\n\n\t Enter Rectangle Width : ";
			cin>>b;
			
			cout<<"\n\n\t Enter Circle Redius : ";
			cin>>c;
			
			Area A;
			
			float one=A.AreaRectangle(a,b);
			cout<<"\n\n\t Area of Rectangle : "<<one;
			float two=A.AreaTriangle(a,b);
			cout<<"\n\n\t Area of Triangle : "<<two;
			float three=A.AreaCircle(c);
			cout<<"\n\n\t Area of circle : "<<three;
			
}
