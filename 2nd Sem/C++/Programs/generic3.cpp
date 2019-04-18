// how to overload a generic function
#include<iostream>
using namespace std;
template <class t>
t sum(t a, t b)
{
	return a+b;
}
template <class t>
t sum(t a, t b, t c)
{
	return a+b+c;
}
int main()
{
	cout<<"Sum of two int variables="<<sum(10,20)<<endl;
	cout<<"sum of two float variables="<<sum(1.1, 2.2)<<endl;
	cout<<"sum of three int var ="<<sum(1,2,3)<<endl;
	cout<<"sum of three float var = "<<sum(1.1, 2.2, 3.3)<<endl;
	return 0;
}