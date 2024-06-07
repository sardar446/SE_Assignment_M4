#include <iostream>
/* 4. Write a C++ Program display Student Mark sheet using Multiple inheritance*/
using namespace std;
class Student 
{
    string name;
    int rollNumber;
	public:
    
    void displayData() 
	{
        name="Sardar singh";
        cout << "\n\n Student Name : " <<name;
    }
};

class Marks
{
    int marks1, marks2, marks3;
public:
    void displayMarks() 
	{
		marks1=78;
		marks2=88;
		marks3=95;
        cout << "\n\n Marks in Subject 1: " << marks1;
        cout << "\n\n Marks in Subject 2: " << marks2;
        cout << "\n\n Marks in Subject 3: " << marks3;
    }
};

class MarkSheet : public Student, public Marks {};

main() 
{
    MarkSheet S;
    S.displayData();
    S.displayMarks();
}

