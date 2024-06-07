#include <iostream>
using namespace std;
/* 6. Write a C++ Program to show access to Private Public and Protected using
Inheritance */
class Base 
{
private:
    int privateMember;
protected:
    int protectedMember;
public:
    int publicMember;

    Base() 
	{
        privateMember = 1;
        protectedMember = 2;
        publicMember = 3;
    }

    void display() 
	{
		cout<<"\n\n\t Base Class......";
        cout << "\n\n\t Private member (Base): " << privateMember;
        cout << "\n\n\t Protected member (Base): " << protectedMember;
        cout << "\n\n\t Public member (Base): " << publicMember;
    }
};

// Derived class
class Derived : public Base 
{
public:
    void accessMembers() 
	{
        // Private member of base class is not accessible
		
		cout<<"\n\n\n\t Derived Class......";
        // Protected member of base class is accessible
        cout << "\n\n\t Protected member (Derived): " << protectedMember;

        // Public member of base class is accessible
        cout << "\n\n\t Public member (Derived): " << publicMember;
    }
};

main() 
{
    Derived Obj;

    Obj.display();
    Obj.accessMembers();
}
