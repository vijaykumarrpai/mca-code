#include <iostream>
using namespace std;
class circle
{
float r;
public:
	circle()
	{
		r=5;
	}
	circle(float r)
	{
		this->r = r;
	}
	void showarea()
	{
		cout<<"Area of Circle :"<<3.14*r*r<<endl;
	}
};
int main()
{
	circle c1;
	circle c2(10);
	c1.showarea();
	c2.showarea();
	return 0;
}