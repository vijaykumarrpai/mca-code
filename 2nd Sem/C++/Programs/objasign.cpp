#include <iostream>
using namespace std;
class myclass
{
	int i;
public:
	void seti(int n)
	{
		i=n;
	}
	int geti()
	{
		return i;
	}
};
int main()
{
	myclass ob1,ob2;
	ob1.seti(99);
	ob2= ob1;  // assign data from ob1 to ob2
	cout<<"this is ob2's i:"<<ob2.geti();
	return 0;
}