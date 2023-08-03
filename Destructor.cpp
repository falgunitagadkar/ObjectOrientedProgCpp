//Destructor in cpp
//Destructor neither takes any arguments nor it returns any argument
//Destrutor is used for clean up of memory or closing of files etc...like finally block in java
//Date:24/7/22

#include<iostream>
using namespace std;

class Num
{
	static int count;
	
	public:
		Num()
		{
			count++;
			cout<<"This is the time when constructor of the object number "<<count<<" is called"<<endl;
		}
		
		~Num()
		{
			cout<<"This is the time when destructor of the object number "<<count<<" is called"<<endl;
			count--;
		}
};

int Num::count=0;

int main()
{
	cout<<"Entering the main block"<<endl;
	
	cout<<"Creating first object"<<endl;
	Num n1;
	{
		cout<<"Entering the block"<<endl;
		cout<<"Creating two objects"<<endl;
		
		Num n2,n3;
		cout<<"Exiting the block"<<endl;
		
		//When control exits from the block it destroys the objects created inside this block and thus the destructor runs for those objects
	}
	
	cout<<"Back to main"<<endl;
	
	//Before completing this the objects in main are destroyed
	return 0;
}
