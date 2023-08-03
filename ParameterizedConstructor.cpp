//Parameterized Constructor

#include<iostream>
using namespace std;

class Point
{
	int x,y;
	
	public:
		Point(int a,int b)
		{
			x=a;
			y=b;
		}
		
		
		void displayPoint()
		{
			cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
		}
};

int main()
{
	Point p1(2,3);
	Point p2(4,5);
	
	p1.displayPoint();
	p2.displayPoint();
	return 0;
}
