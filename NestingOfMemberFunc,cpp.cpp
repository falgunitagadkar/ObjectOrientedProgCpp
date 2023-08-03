//Nesting in member function

#include<iostream>
#include<string>
using namespace std;

class Binary
{
	string s;//by default members are private
	
	public:
		void read();
		void chk_binary();
		void ones_compliment();
		void display();
			
};

void Binary::read()
{
	cout<<"Enter the string"<<endl;
	cin>>s;
}

void Binary::chk_binary()
{
	for(int i=0;i<s.length();i++)
	{
		if(s.at(i)!=0 && s.at(i)!=1)
		{
			cout<<"Incorrect binary string"<<endl;
			exit(0);
		}
	}
}

void Binary::ones_compliment()
{
	for(int i=0;i<s.length();i++)
	{
		if(s.at(i)==0)
		{
			s.at(i)=1;
		}
		else
		{
			s.at(i)=0;
		}
	}
}

void Binary::display()
{
	cout<<s;
}
int main()
{
	Binary bn;
	bn.read();
	bn.chk_binary();
	bn.display();
	
	
	bn.ones_compliment();
	bn.display();
	return 0;
}
