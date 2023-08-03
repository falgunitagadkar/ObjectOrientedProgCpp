//Dynamic initialization of constructors
//Date:23/7/22

#include<iostream>
using namespace std;

class BankDeposit
{
	int principal;
	int years;
	float interestRate;
	float returnValue;
	
	public:
		BankDeposit()
		{
		}
		
		BankDeposit(int p,int y,float r)//when interest rate is provided in float i.e 0.04 for 4%
		{
			principal=p;
			years=y;
			interestRate=r;
			
			returnValue=principal;
			
			for(int i=0;i<y;i++)
			{
				returnValue=returnValue * (1+r);
			}
			
		}
		
		BankDeposit(int p,int y,int r)//when interest rate is provided in percentage i.e eg 4%
		{
			principal=p;
			years=y;
			interestRate=float(r)/100;
			
			returnValue=principal;
			
			for(int i=0;i<y;i++)
			{
				returnValue=returnValue * (1+interestRate);
			}
		}
		
		void displayReturn()
		{
			cout<<"You get an return of "<<returnValue<<" Rs on principal amount of "<<principal<<" on "<<interestRate
				<<" rate after "<<years<<" years"<<endl;
		}
};
int main()
{
	BankDeposit bd1,bd2,bd3;
	
	int p,y;
	float r;
	int R;
	
	cout<<"Enter the amount ,duration and rate of interest"<<endl;
	cin>>p>>y>>r;
	bd1=BankDeposit(p,y,r);
	
	cout<<"Enter the amount ,duration and rate of interest"<<endl;
	cin>>p>>y>>R;
	bd2=BankDeposit(p,y,R);
	
	bd1.displayReturn();
	bd2.displayReturn();
	return 0;
}
