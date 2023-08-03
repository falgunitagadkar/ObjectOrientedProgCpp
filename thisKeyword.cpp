//this keyword is the pointer that points to current class instance object
//Date:25/7/22

#include<iostream>
using namespace std;

class Test
{
	int a;
	public :
		Test& setData(int a)
		{
			this->a=a;
			return *this;
		}
		
		void getData()
		{
			cout<<"The value of a is "<<a<<endl;
		}
};

int main()
{
	Test t;
	t.setData(4).getData();
	return 0;
}
