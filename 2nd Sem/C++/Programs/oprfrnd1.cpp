//operator overloading using friend function
#include<iostream>
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
	area operator -(area ob2);
	friend area operator +(area ob1, area ob2);
};
//function for operator +
area operator +(area ob1, area ob2)
{
	area ob3;
	ob3.l= ob1.l + ob2.l;
	ob3.b= ob1.b + ob2.b;
	return ob3;
}
// function for operqtor -
area area :: operator -(area ob2)
{
	area ob3;
	ob3.l= l - ob2.l;
	ob3.b= b - ob2.b;
	return ob3;
}
int main()
{
	area ob1(5,10), ob2(15,21), ob3;
	ob3= ob1 + ob2;
	ob3.display();
	(ob2-ob1).display();
}