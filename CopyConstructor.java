//Copy construtor
//Date:23/7/22
//Compiler automatically creates an copy constructor in case we don't make any

#include<iostream>
using namespace std;

class Number
{
	int a;
	
	public:
		Number(){
			a=0;
		}
		Number(int num)
		{
			a=num;
		}
		Number(Number &obj)//This is copy constructor
		{
			a=obj.a;
		}
		
		void display()
		{
			cout<<"Data value is "<<a<<endl;
		}	
}

int main()
{
	Number n1,n2,n3(45);
	
	n2=n3;
	n1.display();
	n2.display();
	n3.display();
	return 0;
}
