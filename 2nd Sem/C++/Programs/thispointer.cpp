// program to create a class pwr that computes the result of a number raised to some power using this pointer
#include<iostream>
using namespace std;
class pwr
{
	double b, val;
	int e;
public:
	pwr(double base, int exp);
	double getpwr()
	{
		return val;
	}
};
pwr :: pwr(double base, int exp)
{
	this->b = base;
	this->e = exp;
	val = 1;
	if (exp==0)
		return;
	for(; exp>0;exp--)
		val=val*b;
}
int main()
{
	pwr x(4.0, 2), y(2.5, 1), z(5.7, 0);

	cout<<x.getpwr()<<"  ";
	cout<<y.getpwr()<<"  ";
	cout<<z.getpwr()<<"\n";
	return 0;
}