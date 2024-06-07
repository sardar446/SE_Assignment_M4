#include<iostream>
using namespace std;
/* 3. Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance) */
class person
{
    string name;
    int age;

public:
    person(string a, int b)
    {
        name = a;
        age = b;
    }
};

class student 
{
    float percentage;

public:
    student(string a, int b, float p) 
    {
        percentage = p;
    }
};

class teacher :  public person, public student
{
    int salary;

public:
    teacher(string a, int b, float p, int s) : person(a, b), student(a, b, p)
    {
        salary = s;
    }
};

int main()
{
    string name;
    int age, salary;
    float percentage;

    cout << "\n\n\t Enter Person Name : ";
    cin >> name;

    cout << "\n\n\t Enter Person Age : ";
    cin >> age;

    cout << "\n\n\t Enter Student Percentage : ";
    cin >> percentage;

    cout << "\n\n\t Enter Teacher Salary : ";
    cin >> salary;

    teacher T(name, age, percentage, salary);
}

