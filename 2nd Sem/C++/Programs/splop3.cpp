#include<iostream>
using namespace std;

class test
{
	int x,y,z;
public:
	test()
	{
		x=y=z=0;
	}
	test(int i, int j, int k)
	{
		x = i;
		y = j;
		z = k;
	}
	test operator()(int a, int b, int c);
	void show();
};

test test::operator()(int a ,int b, int c)
{
	test temp;

	temp.x = x + a;
	temp.y = y + b;
	temp.z = z + c;

	return temp;
} 

void test :: show()
{
	cout<<x<<",";
	cout<<y<<",";
	cout<<z<<endl;
}

int main()
{
	test ob1(1, 2, 3), ob2;

	ob2 = ob1(10, 11, 12);

	cout<<"object 1: ";
	ob1.show();

	cout<<"object 2: ";
	ob2.show();

	return 0;
}