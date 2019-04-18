//abnormal termination for non-matching catch
#include <iostream>
using namespace std;
int main()
{
	int a=20;
	try{
		cout<<"within try";
		throw a;
	}
	catch(char b)
	{
		cout<<"\n caught an exception"<<a;
	}
}