#include<iostream>
/* 7. Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.*/
using namespace std;

class Rectangle
{
	float length, width;
	
	public: 
		void scan_data()
		{
			cout<<"\n\n\t Enter Rectangle Length : ";
			cin>>length;
			
			cout<<"\n\n\t Enter Rectangle Width : ";
			cin>>width;
		}
		void print_data()
		{
			cout<<"\n\n\t Rectangle Area : "<<length*width;
			cout<<"\n\n\t Rectangle Perimeter : "<<2*(length+width);
		}
};

main()
{
	Rectangle R;
	
	R.scan_data();
	R.print_data();
}
