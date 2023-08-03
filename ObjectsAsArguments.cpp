//Passing object as arguments
//Date:22/7/22

#include<iostream>
using namespace std;


class Complex
{
	int a;
	int b;
	
	public:
		void setData(int v1,int v2)
		{
			a=v1;
			b=v2;
		}
		
		void setDataUsingSum(Complex o1,Complex o2)
		{
			a=o1.a+o2.a;
			b=o1.b+o2.b;
		}
		
		void printData()
		{
			cout<<"The Complex number is "<<a<<" + "<<b<<"i"<<endl;
		}
};
int main()
{
	Complex c1,c2,c3;
	
	c1.setData(1,2);
	c2.setData(3,4);
	
	c3.setDataUsingSum(c1,c2);
	
	c1.printData();
	c2.printData();
	c3.printData();
	return 0;	
}
