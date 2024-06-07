#include<iostream>
using namespace std;
/* 8. Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading */
class Addition
{
	int a, b;
	
	public :
			int Sum(int x, int y)
			{
				a=x;
				b=y;
				return a+b;
			}
			
			int Subtraction(int x, int y)
			{
				a=x;
				b=y;
				return (a-b);
			}
			int Multiplication(int x, int y)
			{
				a=x;
				b=y;
				return (a*b);
			}
			float Divide(float x, float y)
			{
				if (y!=0)
				{
					a=x;
					b=y;
					return (a/b);
				}
				else
				{
					cout << "\n\n\t Error: Cannot divide by zero";
				}
			
			}
};

main()
{
	Addition A;
	
	int two=A.Sum(10, 20);
	cout<<"\n\n\t Sum : "<<two;
	int three=A.Subtraction(10, 20);
	cout<<"\n\n\t Subtraction : "<<three;
	int four=A.Multiplication(10, 20);
	cout<<"\n\n\t Multiplication : "<<four;
	float five=A.Divide(20, 10);
	cout<<"\n\n\t Divide : "<<five;
	
}


