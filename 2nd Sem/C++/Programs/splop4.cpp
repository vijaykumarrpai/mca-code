#include<iostream>
using namespace std;

class test
{
	int comma,comma2;
public:
	test() {}
	test(int com, int com2)
	{
		comma = com;
		comma2 = com2;
	}

	void show()
	{
		cout<<comma<<"\t";
		cout<<comma2<<"\n";
	}

	test operator,(test op1);
};

test test::operator,(test op1)
{
	test temp;

	temp.comma = op1.comma;
	temp.comma2 = op1.comma2;
	cout<<op1.comma << "" <<op1.comma2 << endl;

	return temp;
}

int main()
{
	test ob(10, 20), ob2(20, 40), ob3(20, 30);
	ob.show();
	ob2.show();
	ob3.show();
	return 0;
}