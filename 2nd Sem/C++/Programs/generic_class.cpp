//program to use generic class or class template
#include<iostream>
using namespace std;
template <class t>
class test
{
	t a, b;
public:
	void get()
	{
		cin>>a>>b;
	}
	t sum(); //member function  declaration
	/*t sum()
	{
		return a+b;
	}*/
};
template <class t>   //function definition
t test <t> :: sum()
{
	return a+b;
}
int main()
{
	test <int> t1;
	test <float> t2;
	cout<<"enter two integers";
	t1.get();
	cout<<"sum ="<<t1.sum()<<endl;

	cout<<"enter two floats";
	t2.get();
	cout<<"sum = "<<t2.sum()<<endl;
	return 0;
}