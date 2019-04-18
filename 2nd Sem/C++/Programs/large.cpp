#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int large(int, int);
	cout<<"Enter the values of a,b";
	cin>>a>>b;
	cout<<"Largest number is :"<<large(a,b);
	return 0;
}

	int large(int x, int y)
{
	if(x>y)
	{
	return x;
	}	
	else
	{
	return y;
	}
}
