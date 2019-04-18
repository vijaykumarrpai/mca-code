#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int p,a,b,c,area;
	cout<<"Enter the first side of triangle :"<<endl;
	cin>>a;

	cout<<"Enter the second side of triangle :"<<endl;
	cin>>b;

	cout<<"Enter the third side of triangle :"<<endl;
	cin>>c;

	p = (a+b+c)/2;

	cout<<p<<endl;

	area = sqrt(p*((p-a)*(p-b)*(p-c)));

	cout<<"The area of triangle is :" << area;

	return 0;
}
