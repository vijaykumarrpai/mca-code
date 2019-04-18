// overloading comparision (==) operator
#include <iostream>
using namespace std;
class test
{
	int a;
public:
	void get()
	{
		cin>>a;
	}
	void operator ==(test t2)
	{
		if(a==t2.a)
			cout<<"both objects are equal";
		else
			cout<<"objects are not equal";
		}
};
int main()
{
	test t1, t2;
	cout<<"enter the t1 object's a value=";
	t1.get();
	cout<<"enter the t2 object's a value=";
	t2.get();
	t1==t2;
//	t1.compare(t2);  //function calling
	return 0;

}