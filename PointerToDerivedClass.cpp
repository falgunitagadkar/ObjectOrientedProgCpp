//Pointer to Derived class
//Date:27/7/22

#include<iostream>
using namespace std;

class BaseClass
{
	public:
		int var_base;
		
		void display()
		{
			cout<<"The Base class variable var_base is "<<var_base<<endl;
		}
};

class DerivedClass :public BaseClass
{
	public:
		int var_derived;
		
		void display()
		{
			cout<<"The Base Class variable is "<<var_base<<endl;
			cout<<"The Derived Class variable is "<<var_derived<<endl;
		}
};

int main()
{
	BaseClass *base_class_pointer;
	BaseClass obj_base;
	DerivedClass obj_derived;
	
	base_class_pointer=&obj_derived;//this is valid but this pointer can only access those members that are of base class
	
	base_class_pointer->var_base=45;
	base_class_pointer->display();//this is called run time polymorphism because late binding occurs of the display of base class
	
	
	cout<<endl;
	
	DerivedClass *derived_class_pointer=&obj_derived;//this pointer can access all members but display() of derived class is bind when running
	derived_class_pointer->var_base=23;
	derived_class_pointer->var_derived=383;
	derived_class_pointer->display();
	
	
	return 0;
}

