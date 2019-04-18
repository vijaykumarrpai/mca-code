//Write a program to perform arithmetic operations on two complex number objects which has real part and imaginary part. Use operator overloading functions as member functions

#include<iostream>
using namespace std;

class test
{
	int a,b;
public:
	test(){};
	test(int i ,int j)
	{
		a=i;
		b=j;
	}
	void show()
	{
		cout<<a<<"+i"<<b;
	}
	test operator +(test);
};

	test test::operator +(test obj)
	{
		test temp;
		temp.a = a+obj.a;
		temp.b = b+obj.b;
		return(temp);
	}

	int main()
	{
		test c1(5,6),c2(6,7),c3;
		cout<<"First no is :\t";
		c1.show();
		cout<<"Second no is :\t";
		c2.show();
		c3 = c1 + c2;
		cout<<"Sum is :\t";
		c3.show();
	}



