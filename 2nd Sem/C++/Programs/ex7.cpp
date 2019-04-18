//throwing an exception from a function
#include<iostream>
using namespace std;
int divide(int x, int y)
{
	if (y==0)
		throw "division by zero!";  //throw an exception
    return x/y;
}
int main()
{
	int a, b, c;
	cout<<"enter two values:";
	cin>>a>>b;
	try{
		c=divide(a,b);  //function call
		cout<<"Result is:"<<c;
	}
	catch(const char *s)   //catch the exception
	{
		cout<<s;
	}
}