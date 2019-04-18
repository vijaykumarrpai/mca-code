#include<iostream>
using namespace std;

class test
{
	int a[3];
	public:
	test(int i, int j, int k)
	{
	a[0] = i;
	a[1] = j;
	a[2] = k;
	}

	int operator [](int i)
	{
	return a[i];
	}
};

int main()
{
	test ob(1,2,3);
	cout<<ob[1];
	return 0;
}