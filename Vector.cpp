//Vectors in cpp
//Date:28/7/22

#include<iostream>
#include<vector>
using namespace std;

template<class T>
void display(vector<T> &v)
{
	for(int i=0;i<v.size();i++)
	{
		 cout<<v.at(i)<<" ";
	}
	
	cout<<endl;
}

int main()
{
	vector<int> vec;//zero element vector created
	int size,element;
	
	cout<<"Enter size of your vector"<<endl;
	cin>>size;
	
	cout<<"Enter elements of  vector"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>element;
		vec.push_back(element);	
	}
	
	display(vec);
	display(vec);
	
	vector<int> :: iterator iter=vec.begin();
	vec.insert(iter+1,6,566);//points to 1st element and inserts 6 copies of 566 from the point where iteator points
	
	vector<float> vec2;
	vec2.push_back(4.5);
	vec2.push_back(6.7566);
	vec2.push_back(5.677);
	cout<<endl;
	display(vec2);
	
	vector<char> vec3(5);//creates temporarily vector of size 5 whose size can be extended
	vector<char> vec4(vec3);//copy of vec3.allocator_type..which copies only the size of vec3 but not elements
	
	return 0;
}
