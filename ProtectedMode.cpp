//Protected visibility mode

//                    Public Inheritance        Private Inheritance          Protected Inheritance
//Private members		Not inherited             not inherited                Not Inherited
//Protected members     Protected   				Private						Protected
//Public members		Public                      Private						Protected

//Date:24/7/22

#include<iostream>
using namespace std;

class Base
{
	protected:
		int a;
		
	private:
		int b;
			
};

class Derived:protected Base
{
	//here a is inherited but it remains protected here so behaves like private when tried to access outside the class
}; 
int main()
{
	Derived d;
	//d.a;-->not possible
	return 0;
}
