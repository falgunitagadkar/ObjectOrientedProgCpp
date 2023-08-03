//C++ Template:Template are the blueprint for the class where we can later define the data type and thus make only only class 
//using template to create multiple datatype usage

//Date:28/7/22

#include<iostream>
using namespace std;

class vector
{
	public:
	int *arr;
	int size;//size of vector...example 3i+4j+5k...is the vector of size 3
	
	vector(int m)
	{
		size=m;
		arr=new int[size];//the way malloc is used...here we dynamically create an array of size m to store vector elements;
	}
	
	int dotProduct(vector &v)
	{
		int d=0;
		for(int i=0;i<size;i++)
		{
			d+=arr[i]*v.arr[i];
		}
		
		return d;
	}
	
};
int main()
{
	vector v(3);
	v.arr[0]=1;
	v.arr[1]=3;
	v.arr[2]=5;
	
	vector v1(3);
	v1.arr[0]=6;
	v1.arr[1]=1;
	v1.arr[2]=0;
	
	int a=v.dotProduct(v1);
	cout<<a;
	return 0;
}
