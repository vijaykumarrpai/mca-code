#include <iostream>
using namespace std;
class myhome
{
	char ph[5], tv[5], cyl[5];
	friend class myneighbor;
};
class myneighbor
{
	myhome mh;
public:
	void lendme()
	{
		cout<<"can u pls lend me your phone ?";
		cin>>mh.ph;
		cout<<"can u pls lend me your cylinder ?";
		cin>>mh.cyl;
	}
	void show()
	{
		cout<<"thank you for ur phone"<<endl;
		cout<<"thank you for ur cylinder"<<endl;		
	}
};
int main()
{
	myneighbor mn;
	mn.lendme();
	mn.show();
	return 0;

}