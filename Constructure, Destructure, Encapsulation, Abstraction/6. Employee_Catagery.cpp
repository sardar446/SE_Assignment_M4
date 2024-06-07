#include<iostream>
using namespace std;
/* 6. Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor*/
class Employee
{
	string emp_name;
	int emp_id;
	int salary;
	
	public:
		Employee(string a, int b, int c)
		{
			emp_name=a;
			emp_id=b;
			salary=c;
		}	
		void get_info()
		{
			cout<<"\n\n\t Enter a Employee Name : ";
			cin>>emp_name;
			
			cout<<"\n\n\t Enter a Employee Id : ";
			cin>>emp_id;
			
			cout<<"\n\n\t Enter a Employee Salary : ";
			cin>>salary;
		}
		void put_info()
		{
			cout<<"\n\n\t Employee Name "<<" : "<<emp_name;
			cout<<"\n\n\t Employee Id "<<" : "<<emp_id;
			cout<<"\n\n\t Employee Salary "<<" : "<<salary;
		}
		void calculat()
		{
			if(salary>=40000 || salary==50000)
			{
				cout<<"\n\n\t Employee's Performance Exellant ";
			}
			else if (salary>=30000 || salary<40000)
			{
				cout<<"\n\n\t Employee's Performance Good ";
			}
			else if (salary>=20000 || salary<30000)
			{
				cout<<"\n\n\t Employee's Performance Enough ";
			}
			else if (salary<20000)
			{
				cout<<"\n\n\t Employee's Performance Not Bad ";
			}
		}
};
main()
{
	string x;
	int y; 
	int z;
	Employee E(x, y, z);
	
	E.get_info();
	E.put_info();
	E.calculat();
}
