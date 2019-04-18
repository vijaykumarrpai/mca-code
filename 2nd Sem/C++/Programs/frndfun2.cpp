// program to illustrate creation of friend function
// of a class which is function member of other class
#include <iostream>
using namespace std;
class sample1
{
	int i,j;
public:
	sample1()
	{
		i=10;
		j=20;
	}
	void sum();  // sum() member function of class sample1
};
class sample2
{
	int m,n;
public:
	sample2()
	{
		m=30;
		n=40;
	}
	friend void sample1 :: sum();  // sum() made as friend function of sample2
};
void sample1 :: sum()
{
	int ans;
	sample2 y;
	ans = i + j + y.m + y.n;
	cout<<"addition result is :"<<ans;
}
int main()
{
	sample1 x;
	x.sum();
	return 0;
}