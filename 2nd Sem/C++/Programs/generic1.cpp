//how to pass two different types of arguments to template
#include<iostream>
using namespace std;
template <class t1, class t2>
float sum(t1 x, t2 y)
{
	return x+y;
}
int main()
{
	cout<<"Sum ="<<sum(5,5.5)<<endl;
	cout<<"sum ="<<sum(10.2,20)<<endl;
	return 0;
}