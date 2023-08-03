//Virtual base class
/*
			Student
			/     \
		Test	  Sports
			\     /
			 Result	
//Here data members and methods of class Student are inherited twice in Result from Test and Sports...so we make Student 
//...as Virtual Base Class while defining class Test and Sports to solve the above ambiguity
*/

//Date:25/7/22

#include<iostream>
using namespace std;

class Student
{
	protected:
		int roll_no;
		
	public:
		void setRollNumber(int a)
		{
			roll_no=a;
		}
		
		void printRollNumber()
		{
			cout<<"Your roll number is "<<roll_no<<endl;
		}
};

class Test:virtual public Student
{
	protected:
		float maths,physics;
		
	public:
		void setMarks(float a,float b)
		{
			maths=a;
			physics=b;
		}
		
		void printMarks()
		{
			cout<<"Your marks in maths are: "<<maths<<endl;
			cout<<"Your marks in physics are: "<<physics<<endl;
			}	
};

class Sports:virtual public Student
{
	protected:
		float score;
		
	public:
		void setScore(float s)
		{
			score=s;
			
			}
			
		void printScore()
		{
			cout<<"Your PT score is "<<score<<endl;
			}	
};

class Result:public Test,public Sports
{
	float total;
	public:
		void display()
		{
			total=maths+physics+score;
			printRollNumber();
			printMarks();
			printScore();
			cout<<"Your total score is "<<total<<endl;
		}
};
int  main()
{
	Result falguni;
	falguni.setRollNumber(14);
	falguni.setMarks(78.9,99.5);
	falguni.setScore(9.8);
	
	falguni.display();
	return 0;
}
