//Function overloading

#include<iostream>
using namespace std;


float volume(int r,int h)//volume of cylinder
{
	return ( 3.14*r*r*h);
}

int volume(int s)//volume of cube
{
	return(s*s*s);
}

int volume(int l,int b,int h)//Volume of cuboid
{
	return (l*b*h);
}


int main()
{  

	cout<<"Volume of cylinder having radius 3 and height 5 is "<<volume(3,5)<<endl;
	cout<<"Volume of cube having side length of 4 is "<<volume(4)<<endl;
	cout<<"Volume of cuboid having dimensions 3,4,5 is "<<volume(3,4,5)<<endl;
	return 0;
}
