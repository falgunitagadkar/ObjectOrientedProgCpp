//Inheritance

//Default visibility mode is private
//Public visibility mode:Public members of the base class becomes the public members of the derived class
//Private visibility mode:Public members of the base class becomes the private members of the derived class
//Private members of the base class cannot be inherited

//Date:24/7/22

#include<iostream>
using namespace std;

class Employee
{
	public:
		int id;
		float salary;
		Employee(){}//Default constructor is always run when any object of child class is created
		
		Employee(int inpId)
		{
			id=inpId;
			salary=450000;
		}
		
		void display()
		{
			cout<<"Employee id is "<<id<<endl;
			cout<<"The salary of the employee is "<<salary<<endl;
		}
		
};

class Programmer:public Employee
{
	public: 
	int languageCode;
	
	Programmer(int inpId)
	{
		id=inpId;
		languageCode=9;
	}
};

int main()
{
	Employee e(1);
	e.display();
	
	Programmer p(3);
	cout<<p.languageCode;
	
	
	return 0;
}
