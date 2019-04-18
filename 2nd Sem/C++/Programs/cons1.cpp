//to calculate simple interest using constructor
#include <iostream>
using namespace std;
class simpleinterest
{
	float p, t, r, si;
public:
	simpleinterest()
	{
		p=1000;
		t= 2;
		r=5;
	}
	~simpleinterest()
	{
		cout<<"Destructor has been called";
	}
	void compute()
	{
		si=(p*t*r) / 100;
	}
	void display()
	{
		cout<<"The simple interest is  :"<<si<<endl;
	}
};
int main()
{
	simpleinterest sim;
	sim.compute();
	sim.display();
	return 0;
}
