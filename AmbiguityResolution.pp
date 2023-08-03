//Ambiguity resolution
//Date:24/7/22

#include<iostream>
using namespace std;

class Base1
{
	public:
		void greet()
		{
			cout<<"How are you?"<<endl;
		}
};

class Base2
{
	public:
		void greet()
		{
			cout<<"Kaise ho?"<<endl;
		}
};

class Derived :public Base1,public Base2
{
	int a;
	
	public:
		void greet()
		{
			Base2::greet();//this resolves the ambiguity which occurs because both the base classes have identical function
		}
};

int main()
{
	Derived d;
	d.greet();
	return 0;
}
