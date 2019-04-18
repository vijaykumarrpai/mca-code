#include<iostream>
using namespace std;
int main()
{
	try{
		cout<<"testing any exception";
		throw 10;
	}
	catch(...)
	{
		cout<<"\ncatched the thrown value";
	}
}