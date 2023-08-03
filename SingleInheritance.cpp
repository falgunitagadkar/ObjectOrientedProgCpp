//Single Inheritance
//Date:24/7/22

#include<iostream>
using namespace std;

class Base
{
	int data1;
	
	public:
		int data2;
		void setData()
		{
			data1=10;
			data2=20;
		}
		
		int getData1()
		{
			return data1;
		}
		
		int getData2()
		{
			return data2;
		}
};

class Derived : public Base
{
	int data3;
	
	public:
		
		void process()
		{
			data3=data2*getData1();
		}
		
		void display()
		{
			cout<<"The value of data1 is "<<getData1()<<endl;
			cout<<"The value of data2 is "<<data2<<endl;
			cout<<"The value of data3 is "<<data3<<endl;
		}
};
int main()
{
	
	Derived d1;
	d1.setData();
	d1.process();
	d1.display();
	return 0;
}
