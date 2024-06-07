#include<iostream>
using namespace std;

/* 5. Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance) */
class Students
{
	protected :
		int rollNumber;
		public : 
		
		void get_roll()
		{
			cout<<"\n\n\t Enter Roll Number : ";
			cin>>rollNumber;
		}
};
class Test : public Students
{
	protected:
	int marks[2];
	public:
		void get_marks()
		{	
			for(int i=0;i<2;i++)
				{
					cout<<"\n\n\t Enter Marks a["<<i<<"] : ";
					cin>>marks[i];
				}
		}
	
};
class Result : public Test
{
	protected:
	int total=0;
	public:
	void get_total()
	{
	for(int i=0;i<2;i++)
	{
		total += marks[i];
	}
	cout<<"\n\n\t Total Marks : "<<total;
	}
};
main()
{
	Result R;
	
	R.get_roll();
	R.get_marks();
	R.get_total();
}
