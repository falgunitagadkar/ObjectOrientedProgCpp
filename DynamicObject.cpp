//Dynamic allocation of objects
//Date:25/7/22

#include<iostream>
using namespace std;

class Complex
{
	int real,imaginary;
	
	public:
		void get_data()
		{
			cout<<"The value of real part is "<<real<<endl;
			cout<<"The value of imaginary part is "<<imaginary<<endl;
		}
		
		void set_data(int a,int b)
		{
			real=a;
			imaginary=b;
		}
};
int main()
{
	Complex c1;
	c1.set_data(1,45);
	c1.get_data();
	
	Complex *ptr=&c1;
	(*ptr).get_data();
	
	Complex *p=new Complex;
	p->set_data(4,67);
	p->get_data();
	return 0;
}
