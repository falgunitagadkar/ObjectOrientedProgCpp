//Static member and functions

#include<iostream>
using namespace std;

class Employee
{
	int id;
	static int count;
	
	public:
		void setData();
		void getData();
		
		static void getCount()
		{
			cout<<"The count of employee is "<<count<<endl;
		}
};

int Employee::count;

void Employee::setData()
{
	cout<<"Enter the employee id for employee no "<<count+1<<endl;
	cin>>id;
	count++;
}

void Employee::getData()
{
	cout<<"The employee id is "<<id<<" for employee number "<<count<<endl;
}
int main()
{
	Employee e,b,h;
	e.setData();
	e.getData();
	
	b.setData();
	b.getData();
	return 0;
}
