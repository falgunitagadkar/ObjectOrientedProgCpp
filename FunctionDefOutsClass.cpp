//Class function defination outside the class

#include<iostream>
using namespace std;

class Employee
{
	private:
		int a,b,c;
		
	public:
		int d,e;
		void setData(int a1,int b1,int c1);//function declaration
		void getData()
		{
			cout<<"The value of a is "<<a<<endl;
			cout<<"The value of b is "<<b<<endl;
			cout<<"The value of c is "<<c<<endl;
			cout<<"The value of d is "<<d<<endl;
			cout<<"The value of e is "<<e<<endl;
		}
};

void Employee::setData(int a1,int b1,int c1)
{
	a=a1;
	b=b1;
	c=c1;
}
int main()
{
	Employee ep;
	//ep.a=7;-->Generates an error as a is private
	ep.d=34;
	ep.e=4;
	ep.setData(3,4,5);
	ep.getData();
	return 0;
}
