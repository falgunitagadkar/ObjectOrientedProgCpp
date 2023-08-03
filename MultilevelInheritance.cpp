//Multilevel Inheritance
//Date:24/7/22

#include<iostream>
using namespace std;

class Student
{
	protected:
		int roll_no;
		
	public:
		void set_roll_number(int a);
		void get_roll_number();
};

void Student::set_roll_number(int a)
{
	roll_no=a;
}

void Student::get_roll_number()
{
	cout<<"Your roll number is "<<roll_no<<endl;
}

class Exam:public Student
{
	protected:
		float physics,maths;
		
	public:
		void set_marks(float a,float b)
		{
			physics=a;
			maths=b;
		}
		
		void get_marks(void)
		{
			cout<<"Your marks in physics are "<<physics<<endl;
			cout<<"Your marks in maths are "<<maths<<endl;
		}	
};

class Result:public Exam
{
	float result;
	
	public:
		void display()
		{
			result=(maths+physics)/2;
			get_roll_number();
			get_marks();
			cout<<"Your result is "<<result<<"%"<<endl;
		}
		
};

int main()
{
	Student s;
	s.set_roll_number(2);
	s.get_roll_number();
	
	cout<<endl;
	Result r;
	r.set_roll_number(4);
	r.set_marks(98,96);
	r.display();
	
	return 0;
}
