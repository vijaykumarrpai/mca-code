#include<iostream>
using namespace std;
int main()
{
	int a,x,y;
	int cube;
	int square;
	
	cin>>x;
	cin>>y;
	int square(int);
	
	int cube(int);

	cout<<"square:"<<square(x);
	cout<<"cube:"<<cube(y);
}

	int square(int a)
	{
	return (a*a);
	}
	
	int cube(int b)
	{
	return (b*b*b);
	}

