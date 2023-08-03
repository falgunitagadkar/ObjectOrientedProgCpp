//Dynamic Array of Objects
//Date:25/7/22

#include<iostream>
using namespace std;

class ShopItem
{
	int id;
	float price;
	
	public:
		void setData(int a,float b)
		{
			id=a;
			price=b;
		}
		
		void getData()
		{
			cout<<"Item id is "<<id<<endl;
			cout<<"Item price is "<<price<<" Rs"<<endl;
		}
};

int main()
{
	int size=3;
	ShopItem *ptr=new ShopItem[size];//dynamically allocates array of object ShopItem
	ShopItem *ptrTemp=ptr;
	
	int i,p;
	float q;
	
	for(i=0;i<size;i++)
	{
		cout<<"Enter id and price of item "<<i+1<<endl;
		cin>>p>>q;
		
		ptr->setData(p,q);//initially ptr points to adddress of first object
		ptr++;//after 3rd iteration ptr points to any random address in heap
	}
	
	
	cout<<"Your item list is:"<<endl;
	for(i=0;i<size;i++)
	{
		cout<<"Item no is "<<i+1<<endl;
		ptrTemp->getData();
		ptrTemp++;
//		cout<<endl;
	}
	return 0;
}
