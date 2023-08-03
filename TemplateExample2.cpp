#include<iostream>
using namespace std;

template <class T>//here T is the custom data type that we use in defining the class template
class vector
{
	public:
	T *arr;
	int size;//size of vector...example 3i+4j+5k...is the vector of size 3 remains int
	
	vector(int m)
	{
		size=m;
		arr=new T[size];//the way malloc is used...here we dynamically create an array of size m to store vector elements;
	}
	
	T dotProduct(vector &v)
	{
		T d=0;
		for(int i=0;i<size;i++)
		{
			d+=arr[i]*v.arr[i];
		}
		
		return d;
	}
	
};
int main()
{
	vector<int> v(3);
	v.arr[0]=1;
	v.arr[1]=3;
	v.arr[2]=5;
	
	vector<int> v1(3);
	v1.arr[0]=6;
	v1.arr[1]=1;
	v1.arr[2]=0;
	
	int a=v.dotProduct(v1);
	cout<<a<<endl;
	
	
	vector<float> v2(3);
	v2.arr[0]=1.3;
	v2.arr[1]=2.3;
	v2.arr[2]=1;
	
	vector<float> v3(3);
	v3.arr[0]=0;
	v3.arr[1]=2;
	v3.arr[2]=1.2;
	
	float f=v2.dotProduct(v3);
	cout<<f<<endl;
	
	//Similarly we can use the same template for various data types like double etc
		return 0;
}
