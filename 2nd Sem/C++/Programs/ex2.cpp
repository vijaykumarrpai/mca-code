//exception handling demo
#include<iostream>
using namespace std;
int main()
{
	int a=20;
	try{
		cout<<"within try";
		throw a;      // throw an exception
		cout<<"test"; //will not be executed
	}
	catch(int x)
	{
		cout<<"\ncaught an exception";
		cout<<"\n value is :"<<a;
	}
}