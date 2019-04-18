// pure virtual function: program contains derived classes hextype, dectype & octtype that inherit the class number and redefine the method show()
#include<iostream>
using namespace std;
class number
{
protected:
	int val;
public:
	void setval(int i)
	{
		val=i;
	}
	virtual void show()=0;
};
class hextype : public number
{
public:
	void show()
	{
		cout<<hex<<val<<endl;	
	}
};
class dectype : public number
{
public:
	void show()
	{
		cout<<val<<endl;
	}
};
class octtype : public number 
{
public:
	void show()
	{
		cout<<oct<<val<<endl;
	}
};
int main()
{
	dectype d;
	hextype h;
	octtype o;

	d.setval(20);
	d.show(); //display 20 decimal

	h.setval(20);
	h.show(); //display 14 hexadecimal

	o.setval(20);
	o.show();  //display 24 octal
	return 0;
}
