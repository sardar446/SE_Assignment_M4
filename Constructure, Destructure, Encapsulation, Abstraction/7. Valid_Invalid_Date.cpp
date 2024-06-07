/* 7. Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.*/
#include<iostream>
using namespace std;
class Date
{
	int day;
	int month;
	int year;
		public:
			Date(int a, int b, int c)    
			{
				day=a;
				month=b;
				year=c;
			}
		void get_data()
		{
			cout<<"\n\n\t Enter Day : ";
			cin>>day;
			
			cout<<"\n\n\t Enter Month : ";
			cin>>month;
			
			cout<<"\n\n\t Enter Year : ";
			cin>>year;
		}
		void set_data ()
		{
			if( day>=1 && day<=31 && month>=1 && month<=12)
			{
				if((day>=1 && day<=31) && (month%2!=0 && month<=7) || (month>=8 && month%2==0))
				{
					cout<<"\n\n\t "<<day<<" - "<<month<<" - "<<year;
					cout<<"\n\n [ Date is Valid ]";
				}
				else if ((day>=1 && day<=30) && (month==9 || month==4 || month==6 || month==11))
				{
					cout<<"\n\n\t "<<day<<" - "<<month<<" - "<<year;
					cout<<"\n\n [ Date is Not Valid ]";
				}
				else if(month==2)
				{
					if((day>=1 && day<=29) && (year%4==0 || year%400==0))
					{
						cout<<"\n\n\t "<<day<<" - "<<month<<" - "<<year;
						cout<<"\n\n [ Date is Valid & leap Year ]";
					}
					else if ((day>=1 && day<=28) && (year%4!=0 || year%400))
					{
						cout<<"\n\n\t "<<day<<" - "<<month<<" - "<<year;
						cout<<"\n\n [ Date is Valid & Not leap Year ]";
					}
					else
					{
						cout<<"\n\n\t "<<day<<" - "<<month<<" - "<<year;
						cout<<"\n\n [ Date is Not Valid ]";
					}
					
				}
				else 
				{
					cout<<"\n\n\t "<<day<<" - "<<month<<" - "<<year;
					cout<<"\n\n [ Date is Not Valid ]";
				}
			}
			else 
			{
				cout<<"\n\n\t "<<day<<" - "<<month<<" - "<<year;
				cout<<"\n\n[ Date is Not Valid ]";
			}
		}
};
main()
{
	int x, y, z;
	Date D(x, y, z);
	
	D.get_data();
	D.set_data();
}
