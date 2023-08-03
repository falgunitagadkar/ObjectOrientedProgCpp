//Function template
//Date:28/7/22

#include<iostream>
using namespace std;

template<class T1,class T2>
float funcAvg(T1 a,T2 b)
{
	float ans=(float)(a+b)/2;
	return ans;
}


template<class T>
void swapp(T &a,T &b)//here we take reference variables to actually swap the values
{
	T temp=a;
	a=b;
	b=temp;
}

int main()
{
	cout<<"The average of 2 and 6 is "<<funcAvg(2,6)<<endl;//for 2 integers
	cout<<"The average of 2.5 and 4.456 is "<<funcAvg(2.5,4.456)<<endl;//for 2 float values
	
	
	int a=5,b=8;
	swap(a,b);
	cout<<"The value of a and b after swap is "<<a<<" and "<<b<<" respectively"<<endl;
	
	char x='d';
	char y='h';
	swap(x,y);
	cout<<"The value of x and y after swap is "<<x<<" and "<<y<<" respectively"<<endl;
	
	return 0;
}
