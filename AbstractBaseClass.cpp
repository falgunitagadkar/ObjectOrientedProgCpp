//Abstract base class..having onw pure virtual function...which is to be defined in the derived class
//Abstract base class is created to for Inheritance and we cannot create objects of abstract base class

#include<iostream>
using namespace std;

class AbstractBaseClass
{
	public:
	virtual void display()=0;//pure virtual function
};

class DerivedClass:public AbstractBaseClass
{
	public:
	void display()
	{
		cout<<"In display of derived class"<<endl;
	}
};
int main()
{
	AbstractBaseClass *abc;
	DerivedClass dc;
	
	abc=&dc;
	abc->display();
	return 0;
}
