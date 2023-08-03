//Multiple Inheritance
//Date:24/7/22

#include<iostream>
using namespace std;

class Base1
{
	protected:
		int base1Var;
		
	public:
		void set_base1(int a)
		{
			base1Var=a;	
		}	
};

class Base2
{
	protected:
		int base2Var;
		
	public:
		void set_base2(int a)
		{
			base2Var=a;
		}
};

class Derived :public Base1,public Base2
{
	public:
		void display()
		{
			cout<<"The value of base1 variable is "<<base1Var<<endl;
			cout<<"The value of base2 variable is "<<base2Var<<endl;
			cout<<"The sum of base1 and base2 variable is "<<base1Var+base2Var<<endl;
		}
};

int main()
{
	Derived d;
	d.set_base1(34);
	d.set_base2(23);
	d.display();
	return 0;
}
