#include<iostream>
/* 5. Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene. */
using namespace std;
class Triangle
{
	int sideA;
	int sideB;
	int sideC;
	public:
		Triangle(int a, int b, int c)
		{
			sideA=a;
			sideB=b;
			sideC=c;
		}
		int get_info()
		{
			cout<<"\n\n\t Enter First Side of Trianlge : ";
			cin>>sideA;
			
			cout<<"\n\n\t Enter Second Side of Tringle : ";
			cin>>sideB;
			
			cout<<"\n\n\t Enter Thirde Side of Tringle : ";
			cin>>sideC;
		}
		int put_info()
		{
			if(sideA==sideB && sideB==sideC)
			{
				cout<<"\n\n\t Equilateral Triangle ";
			}
			else if (sideA==sideB && sideB!=sideC || sideA==sideC &&sideC!=sideB || sideA!=sideB && sideB==sideC)
			{
				cout<<"\n\n\t Isosceles Triangle ";
			}
			else
			{
				cout<<"\n\n\t scalene Triangle ";	
			}
		}
};
main()
{
	int x, y, z;
	Triangle T(x, y, z);
	
	T.get_info();
	T.put_info();
}
