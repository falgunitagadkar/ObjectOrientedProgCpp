//File IO is performed by fstream header class
//MAinly there are three classes used for file ip
//1.fstreambase
//2.ifstream-->inherited from fstreambase for inputting(reading) data from file to program
//3.ofstream-->inherited from fstreambase for outputting(writing) data to file

//Primarily file can be opened by two ways
//1.Using constructor of istream or ostream
//2.using the member function open()

//Date:28/7/22

#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main()
{
	
	string str="Hello Falguni";
	ostream out("sample1.txt");
	
	out<<s;
}
