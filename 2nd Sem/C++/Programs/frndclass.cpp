#include <iostream>
using namespace std;
class test1
{
	int a, b;
public:
	friend class test2;
	void getab()
	{
		cout<<"enter values of a & b  :";
		cin>>a>>b;
	}
};
class test2
{
public:
	void putab(test1 t1)
	{
		cout<<"a="<<t1.a<<endl;
		cout<<"b="<<t1.b;
	}
};
int main()
{
	test1 T1;
	test2 T2;
	T1.getab();
	T2.putab(T1);
	return 0;
}