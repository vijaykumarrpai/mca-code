// mixing standard and generic data types
#include <iostream>
using namespace std;
template <class t1, int y>
class test
{
	t1 a;
	int b;
public:
	test(t1 x) // constructor requires only one parameter as another is of defaclt type
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
	test<float, 50>ob1(25.25);
	
	ob1.display();
	return 0;
}