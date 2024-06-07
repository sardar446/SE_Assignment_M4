#include<iostream>
using namespace std;
/* 8. Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation. */
class Student 
{
	public:
		string sname;
		Student(string str)
		{
			this->sname=str;
		}
};
class Details
{
	private: Student *stud;
	
	public: 
	
	int classs;
	int rollNumber;
	int marks[5];
	
	Details(Student *stud, int c, int r, int m[])
	{
		this->stud=stud;
		this->classs=c;
		this->rollNumber=r;
		for(int i=0;i<5;i++)
		{
			this->marks[i]=m[i];
		}
	}
	
	void print()
	{
		int total=0, percent;
		cout<<"\n\n\t Student Name : "<<stud->sname;
		cout<<"\n\n\t Class : "<<classs;
		cout<<"\n\n\t Roll Number : "<<rollNumber;
		for(int i=0;i<5;i++)
		{
			cout<<"\n\n\t Marks "<<i+1<<" : "<<marks[i];
		}
		 for (int i = 0; i < 5; ++i) 
		{
            total += marks[i];
        }
		 percent = total/5;
		  cout<<"\n\n\t Percentage : "<<percent;
		 if(percent>=90 && percent<=100)
		 {
		 	cout<<"\n\n\t Grade : A+";
		 }
		 else if (percent>=60 && percent<=89)
		 {
		 	cout<<"\n\n\t Grade : A";
		 }
		 else if (percent>=45 && percent<=59)
		 {
		 	cout<<"\n\n\t Grade : B";
		 }
		 else if (percent>=36 && percent<=44)
		 {
		 	cout<<"\n\n\t Grade : C";
		 }
		 else
		 {
		 	cout<<"\n\n\t Fail ";
		 }
	}
};
main()
{
	string str;
	int a, b, c[5];
	
	cout<<"\n\n\t Enter Studen Name : ";
	cin>>str;
	
	cout<<"\n\n\t Enter Class : ";
	cin>>a;
	
	cout<<"\n\n\t Enter Roll Number : ";
	cin>>b;
	
	for(int i=0;i<5;i++)
	{
		cout<<"\n\n\t Enter Marks a["<<i<<"] : ";
		cin>>c[i];
	}
	 Student S(str);
    Details D(&S, a, b, c);
    D.print();
}
