// Program to find the area of circle and Triangle using function overloading
#include <iostream>
#define PI 3.14
using namespace std;

float area(float r)
{
	return(PI*r*r);
}
float area(float b, float h)
{
	return(0.5*b*h);
}
int main()
{
	float a,c,d,e,f;
	cout<<"Enter the radius :"<<endl;
	cin>>a;
	c= area(a);

	cout<<"area of Circle is: "<<c<<endl;
	cout<<"enter the base and height of triangle"<<endl;
	cin>>e>>f;

	d= area(e, f);
	cout<<"Area of Triangle is :"<<d<<endl;
     return 0;
}
