//exception handling with contructor and destructor
#include<iostream>
using namespace std;
class test
{
public:
	test()
	{
		cout<<"this is constructor\n";
	}
	~test()
	{
		cout<<"Now destructor also executed\n";
	}
};
int main()
{
	try{
		cout<<"welcome to exception handling\n";
		test t;
		throw 1;
		cout<<"testing destructor\n";
	}
	catch(...)
	{
		cout<<"Thank you";
	}
}