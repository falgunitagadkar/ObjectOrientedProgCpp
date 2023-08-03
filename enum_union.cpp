//structure and enum in cpp

#include <iostream>
using namespace std;

//at one time only one value can be used in case of union and the total memory is the memory of the largest element
union money
{
	int rice;//4
	char car;//1
	float pounds;//4
};

int main()
{
	enum Meal{ breakfast,lunch,dinner};
	Meal m1=lunch;
	cout<<m1<<endl;
	
	union money m;
	m.rice=45;
	m.car='c';
	cout<<m.rice;//this prints garbage value for rice as now value of character is stored in the memory space of union
	return 0;
}
