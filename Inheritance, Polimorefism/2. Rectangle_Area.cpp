#include<iostream>
using namespace std;
/* 2. Write a C++ Program to find Area of Rectangle using inheritance.*/
class length
{	
	public:
	int l;
		
		void get_len()
		{
			cout<<"\n\n\t Enter Rectangle Length : ";
			cin>>l;	
		}		
};
class width : public length
{	
	public:
	int w;
		void get_wid()
		{
			cout<<"\n\n\t Enter Rectangle Width : ";
			cin>>w;
		}
		void get_area()
		{
			cout<<"\n\n\t Enter Rectagle Area : "<<l*w;
		}
};

main()
{
	width W;
	
	W.get_len();
	W.get_wid();
	W.get_area();
}
