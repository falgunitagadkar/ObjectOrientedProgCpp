//Virtual Funtions:when we make any function virtual in base class...having same name function overriden in derived class
//...then we can call derived class function using base class pointer if the base class function is made virtual

//Date:27/7/22

#include<iostream>
using namespace std;

class BaseClass
{
	public:
	int var_base;
	
	virtual void display()
	{
		cout<<"1 Base class Variable is "<<var_base<<endl;
	}
};

class DerivedClass:public BaseClass
{
	public:
		int var_derived;
		
		void display()
		{
			cout<<"2 Base class variable is "<<var_base<<endl;
			cout<<"2 Derived class variable is "<<var_derived<<endl;
		}
};

int main()
{
	BaseClass *base_class_pointer;
	DerivedClass obj_derived;
	
	base_class_pointer->var_base=21;
	base_class_pointer->display();
	return 0;
}
