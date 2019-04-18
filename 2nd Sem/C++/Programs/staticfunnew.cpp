#include<iostream>
using namespace std;
class sample
{
	static int a,b;
public:
	static void getdata()
	{
		cout<<"enter a&b"<<endl;
		cin>>a>>b;
		cout<<"a & b are"<<a<<endl<<b<<endl;
	}
};
int sample :: a;
int sample :: b;
int main()
{
sample s;
	s.getdata();
	return 0;
}