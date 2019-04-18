// program to calculate simple interest using parameterized constructor
#include <iostream>
using namespace std;
class simpleinterest
{
	float p, t, r, si;
public:
	simpleinterest(float x, float y, float z)
	{
		cout<<"parameterized constructor is called"<<endl;
		p=x;
		t=y;
		r=z;
	}
	~simpleinterest()
	{
		cout<<"destructor is called";
	}
	void compute()
	{
		si=(p*t*r)/100;
	}
	void display()
	{
		cout<<"simple interest="<<si<<endl;
	}
};
int main()
{
	simpleinterest sim(1000,2,5);
	sim.compute();
	sim.display();
	return 0;
}