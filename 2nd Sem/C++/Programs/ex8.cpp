//throwing object of a class as an exception
#include<iostream>
using namespace std;
class test
{
public:
	test(const char *s) //parameterized constructor
	{
		cout<<s;
	}
};
int main()
{
	int a;
	try{
		cout<<"enter a number :";
		cin>>a;
		if (a<0)
			throw test("Negative"); //object type exception
		cout<<"Positive";
	}
	catch(test ob) //object of a class test
	{

	}
}