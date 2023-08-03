#include<iostream>
using namespace std;

class Shop
{
	int itemId[100];
	int itemPrice[100];
	int count;
	
	public:
		void inItCounter()
		{
			count=0;
		}
		
		void setData();
		void displayData();
};

void Shop::setData()
{
	cout<<"Enter the id for item no "<<count+1<<endl;
	cin>>itemId[count];
	cout<<"Enter price for above item "<<endl;
	cin>>itemPrice[count];
	count++;
}

void Shop::displayData()
{
	for(int i=0;i<count;i++)
	{
		cout<<"The Price of item having itemId "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
	}
}

int main()
{
	
	Shop sh;
	int i;
	
	sh.inItCounter();
	for(i=0;i<5;i++)
	{
		sh.setData();
	}
	
	sh.displayData();
	return 0;
}
