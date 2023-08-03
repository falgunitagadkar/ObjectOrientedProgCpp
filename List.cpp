//List in cpp
//List is the implementation of double ended linked list which is used when insertion and deletion in middle are important than access 
//Date:30/7/22

#include<iostream>
#include<list>
using namespace std;

void display(list<int> &l)
{
	list<int> :: iterator it;
	for(it=l.begin();it!=l.end();it++)
	{
		cout<<*it<<" ";
	}
	
	cout<<endl;
}

int main()
{	
	list<int> list1;//Empty list of length 0
	list<int> list2(3);//Empty list of length 3...here elements are not set but the length is decided while creating which can be extended
	
	list1.push_back(5);
	list1.push_back(1);
	list1.push_back(7);
	list1.push_back(9);
	list1.push_back(12);
	display(list1);	
	
	list1.pop_back();//pops the last element
	display(list1);
	
	list1.push_front(3);
	display(list1);//push element at front
	
	list1.pop_front();
	display(list1);
	
	//list2[0]=45;-->[] operator not used in list
	
	list<int> ::iterator iter=list2.begin();
	*iter=45;
	iter++;
	
	*iter=6;
	iter++;
	
	*iter=9;
	iter++;	
	cout<<endl;	
	display(list2);
	
	list1.sort();
	list2.sort();
	
	list1.merge(list2);
	display(list1);
	return 0;
}
