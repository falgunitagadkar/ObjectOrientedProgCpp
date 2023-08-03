//Inline functions:These functions when calles directly the function code is kept in the place where function is called...that passing of arguments
// ..etc steps are eliminated...usually done for single line functions

//Default argument...These should be placed on the extreme left in function defination as well as declaration
//"money" funtion is the example of default arguments


//Constant arguments:These are declared as "const int a" in function defination...this cannot be changed in the function


#include<iostream>
using namespace std;

inline int product(int a,int b)
{
	return a*b;
}

float money(int currentMoney,float factor=1.04)//4% interest rate
{
	return currentMoney*factor;
}

void greet(const int i)
{
	//i=7;//this generates error if we try to change it's value
	cout<<"Good morning "<<i;
}
int main()
{
	int x=2,y=4;
	cout<<"The product of x and y is "<<product(x,y)<<endl;
	
	int amount=100000;
	cout<<"If you save "<<amount<<" Rs now in the bank,you will receive "<<money(amount)<<endl;//here we pass only single argument...it uses default for factor
	cout<<"For VIP: If you save "<<amount<<" Rs now in the bank,you will receive "<<money(amount,1.1)<<endl;//10% interest
	return 0;
	
	greet(5);
 } 
