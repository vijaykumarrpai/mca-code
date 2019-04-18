//class templates with two generic types
#include <iostream>
using namespace std;
template <class t1, class t2>
class test
{
	t1 a;
	t2 b;
public:
	test(t1 x, t2 y)
	{
		a=x;
		b=y;
	}
	void display()
	{
		cout<<a<<"\t"<<b;
	}
};
int main()
{
	test<int, char>ob1(4,'c');
	ob1.display();
	return 0;
}