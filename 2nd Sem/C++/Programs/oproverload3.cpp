//overloading unary operators i.e increment ++ and decrement -- on objects
#include <iostream>
using namespace std;
class test
{
	int a;
public:
	test()
	{
		a=0;
	}
	void operator++()
	{
		a++;
	}
	void operator--(int)
	{
		a--;
	}
	void show()
	{
		cout<<"a ="<<a<<endl;
	}
};
int main()
{
	test t;
	++t;
	//t++;
	t.show();
	t--;
	t.show();
	return 0;
}