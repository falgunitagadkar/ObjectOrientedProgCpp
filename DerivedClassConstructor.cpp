//Constructors in derived class
/*
//If base class has no parameterized constructor there is no need of making constructor in derived class but if not we need ot pass argument through
//derived class constructor

Case 1:
class B :public A
  //order of execution of constructors :A() then B()
  //Base class constructor is called before derived class constructor
  
Case 2:
class C:public B,public A
  //order of execution of constructors :B() then A() then C()  
  //In order of declaration the constructors are called of the base class
  

Case 3;
class C:public B,virtual public A
	//order of execution of contructors :A() then B() then C()
	//Vitual base class contructors are executed before any non-virtual base class contructor
	//If more than one virtual base class then in order of declaration it is decided

*/

//Date:25/7/22

#include<iostream>
using namespace std;

class Base1
{
	int data1;
	
	public:
		Base1(int a)
		{
			data1=a;
			cout<<"Base1 class constructor called"<<endl;
		}
		
		void printBase1data()
		{
			cout<<"The value of data1 is "<<data1<<endl;
		}
};

class Base2
{
	int data2;
	
	public:
		Base2(int a)
		{
			data2=a;
			cout<<"Base2 class constructor called"<<endl;
		}
		
		void printBase2data()
		{
			cout<<"The value of data2 is "<<data2<<endl;
		}
};


class Derived:public Base1,public Base2
{
	int derived1,derived2;
	
	public:
		Derived(int a,int b,int c,int d):Base1(a),Base2(b)//here from derived class constructor values for base class constructors are passed
		{
			derived1=c;
			derived2=d;
			cout<<"Derived class constructor called"<<endl;
		}
		
		void printDerivedData()
		{
			cout<<"The value of derived1 is "<<derived1<<endl;
			cout<<"The value of derived2 is "<<derived2<<endl;
		}
};

int main()
{
	Derived d1(1,2,3,4);
	d1.printBase1data();
	d1.printBase2data();
	d1.printDerivedData();
	return 0;
}
