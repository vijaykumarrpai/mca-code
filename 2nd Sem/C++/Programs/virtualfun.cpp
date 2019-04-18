//program to illustrate the usage of virtual functions
#include<iostream>
using namespace std;
class base
{
public:
	virtual void display()
	{
		cout<<"this is base class virtual function"<<endl;
	}
};
class derived1:public base
{
public:
	void display()
	{
		cout<<"this is derived-1 class display function"<<endl;
	}
};
class derived2 : public base
{
public:
	void display()
	{
		cout<<"this is derived-2 class display function"<<endl;
	}
};
class derived3 : public base
{
public:
	void display()
	{
		cout<<"this is derived-3 display function"<<endl;
	}
};
int main()
{
	base *p;        //pointer to base class
	derived1 d1;
	derived2 d2;
	derived3 d3;

	p=&d1;        //pointer has address of derived1's object
	p->display(); //derived1's display will be called.

	p=&d2;      //pointer has address of derived2's object
	p->display(); //derived2's display will be called.

	p=&d3;     //pointer has address of derived3's object
	p->display(); //derived3's display will be called.
}