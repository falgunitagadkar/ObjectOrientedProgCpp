//Map is associative array
//Date:1/8/22

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	map<string,int> marksMap;
	marksMap["harry"]=98;
	marksMap["falguni"]=99;
	
	
	map<string,int> ::iterator iter=marksMap.begin();
	for(iter=marksMap.begin();iter!=marksMap.end();iter++)
	{
		cout<<(*iter).first<<" "<<(*iter).second<<endl;
	}
	return 0;
}
