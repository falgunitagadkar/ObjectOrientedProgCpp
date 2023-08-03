//Array of objects
//Date:22/7/22

#include<iostream>
using namespace std;

class Employee
{
	int id;
	
	public:
		void setId()
		{
			cout<<"Enter the id of the employee"<<endl;
			cin>>id;
		}
		
		void getId()
		{
			cout<<"The id of the Employee is "<<id<<endl;
		}
		
};


int main()
{
	Employee FB[4];//creating array of objects
	
	for(int i=0;i<4;i++)
	{
		FB[i].setId();
		FB[i].getId();
	}
	return 0;
}
