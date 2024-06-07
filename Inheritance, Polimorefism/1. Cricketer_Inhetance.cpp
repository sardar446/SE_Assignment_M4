#include<iostream>
using namespace std;
/* 1. Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance) */
class cricketer
{
	string name;
		public:
			void get_name()
			{
				cout<<"\n\n\t Enter Batsman Name : ";
				cin>>name;
			}
};
class batsman : public cricketer
{
		int totalRuns;
		int averageRuns;
		int bestPerformance;
		int playMatch;
		public:
			void get_info()
			{
				cout<<"\n\n\t Enter Total Runs : ";
				cin>>totalRuns;
				
				cout<<"\n\n\t Enter Best Performance : ";
				cin>>bestPerformance;
				
				cout<<"\n\n\t How many Matches have Played : ";
				cin>>playMatch;
				
				averageRuns=totalRuns/playMatch;
				
				cout<<"\n\n\t Average Runs : "<<averageRuns;
			}
};

main()
{
	batsman B;	
	
	B.get_name();
	B.get_info();
}
