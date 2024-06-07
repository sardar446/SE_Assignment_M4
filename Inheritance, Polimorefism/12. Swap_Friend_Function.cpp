#include<iostream>
using namespace std;
/* 12.Write a programto swap the two numbers using friend function
without using third variable. */
class Swap
{
	float n1, n2;
	friend float swapping( Swap &S)
		{
				
				S.n1=S.n1+S.n2;
				S.n2=S.n1-S.n2;
				S.n1=S.n1-S.n2;
				
				
			cout<<"\n\n\t .....After Swaping Numers....";
			cout<<"\n\n\t Number 1 "<<" : "<<S.n1;
			cout<<"\n\n\t Number 2 "<<" : "<<S.n2;
		}
	
	public :
		
			Swap()
		{
			cout<<"\n\n\t Enter Number 1 : ";
			cin>>n1;
			
			cout<<"\n\n\t Enter Number 2 : ";
			cin>>n2;
			
			cout<<"\n\n\t .....Before Swaping Numers....";
			cout<<"\n\n\t Enter Number 1 : "<<n1;
			cout<<"\n\n\t Enter Number 1 : "<<n2;
		}
};

main()
{
	Swap S;
	swapping (S);
}
