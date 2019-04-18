//Write an operator overloading program to perform increment of count using ++ operator

#include<iostream>
using namespace std;
class Test
{
	int count;
public:
	Test()
	{
		count = 0;
	}

	void operator ++(int)
	{
		count ++;	
	}

	void show()
	{
		cout<<"Count:"<<count<<endl;
	}
};

int main()
{
	Test t;
	t++;
	t.show();
	return 0;
}