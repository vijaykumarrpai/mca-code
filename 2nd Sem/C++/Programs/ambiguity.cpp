#include <iostream>
using namespace std;

float myfunc(float i);
double myfunc(double i);

int main()
{
	cout<<myfunc(10.1)<<" "; //unambiguous, calls myfunc(double)
	cout<<myfunc(10); //ambiguous

	return 0;
}
float myfunc(float i)
{
	return i;
}
double myfunc(double i)
{
	return i;
}