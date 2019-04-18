#include <iostream>
using namespace std;
int add(int a, int b)
{
	return a+b;
}
float add(float a, float b)
{
	return a+b;
}
double add(double a, double b)
{
	return a+b;
}
double add(int a, double b)
{
	return a+b;
}
int add(int a, int b, int c)
{
	return a+b+c;
}
float add(float a, float b, float c)
{
	return a+b+c;
}
int main()
{
	int d=1, e=3, f=5, g, h;
	float i=3.44, j=5.67, k=1.25, l, m;
	double q=1.777667, r=9.456777, s, t;

	l = add(d, e);
	m = add(i, j);
	g = add(d, e, f);

	cout<<l<<"\n";
	cout<<m<<"\n";
	cout<<g<<"\n"; 
	return 0;
}