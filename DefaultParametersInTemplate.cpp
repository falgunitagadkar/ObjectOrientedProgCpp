//Default Parameters in Template the way we use default parameter in function
//Date:28/7/22

#include<iostream>
using namespace std;

template <class T1=int,class T2=float,class T3=char>
class Falguni
{
	T1 a;
	T2 b;
	T3 c;
	
	public:
		Falguni(T1 x,T2 y,T3 z)
		{
			a=x;
			b=y;
			c=z;			
		}
		
		void display()
		{
			cout<<"The value of a is "<<a<<endl
				<<"The value of b is "<<b<<endl
				<<"The value of c is "<<c<<endl;
		}
};
int main()
{
	
	Falguni<> f(3,5.45,'d');
	f.display();
	
	cout<<endl;
	
	Falguni<int,char,char> g(4,'h','r');
	g.display();
	return 0;
}
