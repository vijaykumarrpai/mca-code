// program to demonstrate Copy constructor

#include <iostream>
using namespace std;
class sample
{
	int a, b;
public:
	sample(int x, int y)  //parameterized constructor
	{
		a=x;
		b=y;
	}
	sample(sample &old)  //copy constructors (old object data need to be initialized with current object)
	{
		a = old.a;  //one object's value copied into another object's value
		b = old.b;
	}
	void print()
	{
		cout<<"a = "<<a<<endl;
		cout<<"b = "<<b<<endl;
	}
};
int main()
{
	sample s1(10,20); //invoke parameterized constructor
	sample s2(s1);  // invoking copy constructor, here s1 data is passed to s2
	s1.print();
	s2.print();
	return 0;
}