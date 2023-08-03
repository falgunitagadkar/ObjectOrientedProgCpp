//Friend class is the class which can access the private data members of the class that friends it

//Date:22/7/22

#include<iostream>
using namespace std;

class Calculator;

class Complex
{
	int a,b;
	
	//we can friend only those functions of other class that require access to private data members...for security purpose entire class is not made friend usually
	//friend int Calculator::sumRealComplex(Complex,Complex);
	//friend int Calculator::sumComComplex(Complex,Complex);
	
						//OR
	friend class Calculator;					
	
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

class Calculator
{
	public:
	int sum(int a,int b)
	{
		return (a+b);
	}
	
	int sumRealComplex(Complex o1,Complex o2)
	{
		return (o1.a+o2.a);
	}
	
	int sumComComplex(Complex o1,Complex o2)
	{
		return (o1.b+o2.b);
	}
};

int main()
{
	
	Complex c1,c2;
	c1.setData(1,4);
	c2.setData(2,6);
	
	Calculator calc;
	cout<<"The sum is "<<calc.sumRealComplex(c1,c2)<<" + "<<calc.sumComComplex(c1,c2)<<"i"<<endl;
	return 0;
}

