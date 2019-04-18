#include <iostream>
using namespace std;
class c1
{
	int i;
public:
	c1(int j)
	{
		i = j;
	}
	int geti()
	{
		return i;
	}
};
int main()
{
	c1 ob(88), *p;
	p = &ob;           //get address of ob
	cout<<p->geti();  //use -> operator to call geti()
	return 0;
}