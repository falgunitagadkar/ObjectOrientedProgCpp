//Template example using multiple parameters in the class
//Date:28/7/22

#include<iostream>
using namespace std;

template<class T1,class T2>
class TemplateEx
{
	T1 data1;
	T2 data2;
	
	public:
		TemplateEx(T1 a,T2 b)
		{
			data1=a;
			data2=b;
		}
		
		void display()
		{
			cout<<data1<<endl<<data2<<endl;;
		}
};
int main()
{
	TemplateEx<char,int> temp('a',45);
	temp.display();
	
	cout<<endl;
	TemplateEx<int,float> t(2,45.676);
	t.display();
	return 0;
}
