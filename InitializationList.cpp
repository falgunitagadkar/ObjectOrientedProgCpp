//Initialization section:One method used to initialize the variables when we already have complex code in contructor

//Syntax:
//		Contructor_name(data_type var1,data_type var2): Initialization list
//			{
//					//contructor body
//			}	

//Date:25/7/22

#include<iostream>
using namespace std;

class Test
{
	int a,b;
	
	public:
		//Test(int i,int j):a(i),b(j)-->valid //Initialization list
		//Test(int i,int j):a(i),b(2*j)-->valid
		//Test(int i,int j ):a(i),b(a+j)//-->here we get desired result because a is initialized first as it is declared first
		Test(int i,int j):a(b+i),b(j)//we don't get desired result because first a is initialized then b
		{
			cout<<"Constructor body"<<endl;
			cout<<"The value of a is "<<a<<endl;
			cout<<"The value of b is "<<b<<endl;
		}
};
int main()
{
	Test t(3,4);
	return 0;
}
