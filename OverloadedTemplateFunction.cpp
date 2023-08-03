//Overloaded template function
//Date:28/7/22

#include<iostream>
using namespace std;

template<class T>
class Falguni
{
	T data;
	public:
		Falguni(T a)
		{
			data=a;
		}
		
		void display();
};

template<class T>
void func(T a)
{
	cout<<"In templatized funtion "<<a<<endl;
}

void func(int a)
{
	cout<<"In normal function "<<a<<endl;
}

template <class T>
void Falguni<T>::display()
{
	cout<<"The value of data is "<<data<<endl;
}
int main()
{
	Falguni<int> f(5);
	f.display();
	
	Falguni<char> c('h');
	c.display();
	
	func(5);//Exact match will be called in place of Templatized function
	func(4.5);
	
	return 0;
}
