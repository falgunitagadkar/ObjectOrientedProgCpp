//Friend functions are functions that can access the private data members of any class...but these functions arenot part of the class
//...which means that the function cannot be called using the object of the class
//Private data members cannot be directly accesed by friend function but requires object
//Friend function can be delared in anywhere i.e in private or public acess mode
//Most of the time it contains objects of class in the arguments

//Date:22/7/22

#include<iostream>
using namespace std;

class Complex
{
	int a,b;
	
	friend Complex sumComplex(Complex o1,Complex o2);
	public:
	void setData(int v1,int v2)
	{
		a=v1;
		b=v2;
	}
	
	void printData()
	{
		cout<<"The Complex number is "<<a<<" + "<<b<<"i"<<endl;
	} 
};

Complex sumComplex(Complex o1,Complex o2)
{
	Complex o3;
	o3.setData((o1.a+o2.a),(o1.b+o2.b));
	
	return o3;
}
int main()
{
	Complex c1,c2,c3;
	c1.setData(1,4);
	c2.setData(5,8);
	
	c3=sumComplex(c1,c2);

	c1.printData();
	c2.printData();
	c3.printData();
	return 0;
} 
