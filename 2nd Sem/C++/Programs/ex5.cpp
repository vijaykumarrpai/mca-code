// try block without catch 
#include<iostream>
using namespace std;
int main()
{
	try{
		cout<<"throws an exception\n";
		throw 1;  //causes error: 
	}
	catch(char a)
	{
		cout<<"caught exception";
	}
}