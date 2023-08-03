//'new' and 'delete' keyword
//Date:25/7/22

#include<iostream>
using namespace std;

int main()
{
	int *p=new int(5);//dynamically allocates memory of size int and stores value '5' in pointer p
	
	cout<<"The value at address p is:"<<*(p)<<endl;
	
	float *f=new float(78.99);//dynamically allocates memory of size float and stores value '78.99' in pointer f
	
	cout<<"The value at address f is "<<*(f)<<endl;
	
	int *arr=new int[3];//dynamically allocates array of int of size 3 and stores base address in arr
	arr[0]=2;
	*(arr+1)=4;
	arr[2]=6;
	
	cout<<"The values in array are:"<<endl;
	cout<<arr[0]<<endl;
	cout<<arr[1]<<endl;
	cout<<arr[2]<<endl;
	
	delete(p);//releases dynamic memory used by pointer p
	delete[] arr;//releases memory of array
	
	return 0;
}
