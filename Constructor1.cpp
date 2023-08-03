//Characteristics of Constructors
//1.They should be defined/declared in the public section
//2.Automatically invoked and has same name as the class name
//3.It can take default arguments
//4.We cannot refer to it's address

//Date:23/7/22

#include<iostream>
using namespace std;

class Complex
{
	int a,b;
	public:
		Complex(void);
		
		void printNumber()
		{
			cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
		}
};

Complex::Complex(void)
{
	a=10;
	b=20;
}
int main()
{
	Complex o1,o2;
	o1.printNumber();
	o2.printNumber();
	
		return 0;
}
