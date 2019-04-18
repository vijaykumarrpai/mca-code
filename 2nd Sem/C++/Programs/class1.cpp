// example: program to find simple interest using class
#include <iostream>
using namespace std;

class simple_interest
{
private:
	float si, p,t,r;
public:
	void input()
	{
		cout<<"enter p, t, r:";
		cin>>p>>t>>r;
	}
	void compute()
	{
		si=(p*t*r)/100;
	}
	void display()
	{
		cout<<"simple interest is:"<<si;
	}
};
int main()
{
	simple_interest x;
	x.input();
	x.compute();
	x.display();
	return 0;
}
