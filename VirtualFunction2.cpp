//Virtual function example
//It cannot be static
//It is not necessary that to redefine the virtual function in the base class
//Virtual function can be friend of any other class
//Object pointer is required while using the concept of virtual function

//Date:28/7/22

#include<iostream>
#include<cstring>
using namespace std;

class CWH
{
	protected:
		string title;
		float rating;
		
	public:
		CWH(string s,float r)
		{
			title=s;
			rating=r;
		}
		
		virtual void display()
		{
			cout<<"bogus code"<<endl;
		}
};

class CWHVideo: public CWH
{
	float videoLength;
	
	public:
		CWHVideo(string s,float r,float vl):CWH(s,r)
		{
			videoLength=vl;
		}
		
		void display()
		{
			cout<<"This is an amazing video of title "<<title<<endl
				<<"Rating for the video is "<<rating<<" out of 5"<<endl
				<<"The length of the video is "<<videoLength<<" minutes"<<endl;
		}
};

class CWHText:public CWH
{
	int words;
	
	public:
		CWHText(string s,float r,int wc):CWH(s,r)
		{
			words=wc;
		}
		
	/*	void display()
		{
			cout<<"This is an amazing text tutorial of title "<<title<<endl
				<<"Rating for the text tutorial is "<<rating<<" out of 5"<<endl
				<<"The word count of the text tutorial is "<<words<<endl;
		}*/
		
};

int main()
{
	
	CWHVideo cv("DJango Tutorial",4.67,4.8);
	cv.display();
	
	
	CWHVideo cv1("CPP tutorial",4.5,12.67);
	CWHText ct("Cpp text tutorial",4,432);
	
	CWH *tut[2];
	tut[0]=&cv1;
	tut[1]=&ct;
	
	cout<<endl;
	
	tut[0]->display();//here the redefined function from the derived class is bind from base class pointer
	
	cout<<endl;
	tut[1]->display();
	return 0;
}

