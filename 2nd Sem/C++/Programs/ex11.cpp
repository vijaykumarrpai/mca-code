//catching class type exception
#include<iostream>
using namespace std;
class divbyzero
{
public:
	divbyzero()
	{
		cout<<"invalid denominator operand\n";
	}
};
int main()
{
	try
	{
		int a, b;
		cout<<"enter first number\n";
		cin>>a;
		cout<<"enter second number\n";
		cin>>b;
		if(b==0)
		{
			divbyzero z;
			throw z;  //throw obj as exception
		}
		cout<<a/b;
	}
	catch(divbyzero x)     //catch class type exception
	{
		cout<<"b is zero, so division not possible";
	}
}