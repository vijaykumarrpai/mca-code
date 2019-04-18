#include <iostream>
using namespace std;
int myfun(int a);
int myfun(int a, int b);

int main()
{
	int (*fp)(int a); //pointer to int f(int)
	fp= myfun; //points to myfun(int)
	cout<<fp(500);
	return 0;
}
int myfun(int a)
{
	return a;
}
int myfun(int a, int b)
{
	return a*b;
}
