#include<iostream>
using namespace std;
class X
{
public:
	static int i;
	X()
	{
		i=50;
	}
};
int X::i=100;
int main()
{
	X obj;
	cout<<obj.i;
}