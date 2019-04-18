// overloading ++ and -- operator using friend function
#include <iostream>
using namespace std;
class area
{
	int l, b;
public:
	area(){}
	area(int x, int y)
	{
		l=x;
		b=y;
	}
	void display()
	{
		cout<<"Area is ="<<l*b<<endl;
	}
	friend area operator ++(area &op);
	friend area operator --(area &op);
};
area operator ++(area &op)
{
	op.l ++;
	op.b ++;
	return op;
}
area operator --(area &op)
{
	op.l --;
	op.b --;
	return op;
}
int main()
{
	area ob1(5,10), ob2;
	ob1.display();
	++ob1;
	ob1.display();
	
	ob2 = ++ob1;
	ob2.display();
	--ob2;
	ob2.display();
	return 0;
}
