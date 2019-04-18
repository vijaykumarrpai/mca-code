/*Write a program to overload the following special operator
1) ->
2) []
3) ()*/

#include<iostream>
using namespace std;
class test
{
public:
	int i;	
	test *operator ->()
	{
		return this;
	}
};

int main()
{
	test t;
	t -> i = 10;
	cout<<t.i<<endl<<t->i;
	return 0;
}