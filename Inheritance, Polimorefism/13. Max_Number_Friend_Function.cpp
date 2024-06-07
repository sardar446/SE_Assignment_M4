#include<iostream>
using namespace std;
/* 13.Write a program to find the max number from given two numbers
using friend function. */
class Max
{
	float n1, n2;
		friend float max(Max &M)
		{
			if(M.n1>M.n2)
			{
				return M.n1;
			}
			else 
			{
				return M.n2;
			}
		}
		public :
			Max()
			{
				cout<<"\n\n\t Enter Number 1 : ";
				cin>>n1;
				
				cout<<"\n\n\t Enter Number 2 : ";
				cin>>n2;
				
			}
};
main()
{
	Max M;
	cout<<"\n\n\t Maximum Number is : "<<max(M);
}
