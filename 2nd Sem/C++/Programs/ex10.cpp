// restricting exception
#include<iostream>
using namespace std;
void divide(int a, int b) throw(int, char, double)
{
	try
	{
		if (b==0)
		{
			throw b;
		}
		if (b==1)
		{
			throw "v";
		}
		if(b==2)
		{
			throw 375.2;
		}
		cout<<a/b;
	}
	catch(int b)
	{
		cout<<"b is zero\n";
		throw b;
	}
}
int main()
{
	try
	{
		int a, b;
		cout<<"enter first number \n";
		cin>>a;
		cout<<"enter second number\n";
		cin>>b;
		divide(a,b);
	}
	catch(int b)
	{
		cout<<"invalid denominator. Division operation not possible";
	}
	catch(char b)
	{
		cout<<"invalid character value\n";
	}
	catch(float b)
	{
		cout<<"invalid Float value\n";
	}
	catch(double b)
	{
		cout<<"Invalid double value";
	}
}