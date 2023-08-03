//friend funtion example
//Date:23/7/22

#include<iostream>
using namespace std;

class c2;

class c1
{
	int val1;
	
	public:
		void setData(int a)
		{
			val1=a;
		}
		
		void display()
		{
			cout<<val1<<endl;
		}
		
	friend void exchange(c1 &, c2 &);
};

class c2
{
	int val2;
	
	friend void exchange(c1 &,c2 &);
	public:
		void setData(int a)
		{
			val2=a;
		}
		
		void display()
		{
			cout<<val2<<endl;
		}
};

void exchange(c1 &obj1,c2 &obj2)
{
	int temp;
	temp=obj1.val1;
	obj1.val1=obj2.val2;
	obj2.val2=temp;
}

int main()
{
	c1 o1;
	o1.setData(34);
	
	c2 o2;
	o2.setData(67);
	
	exchange(o1,o2);
	cout<<"After swap value of c1 object is ";
	o1.display();
	
	cout<<"After swap value of c2 object is ";
	o2.display();
	return 0;
}
