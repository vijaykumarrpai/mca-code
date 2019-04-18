#include<iostream>
#define PI 3.1416
using namespace std;
float volume(int a)
{
	return a*a*a;
}
float volume(float r)
{
	return(4/3)*PI*r*r*r;
}
float volume(float r, float h)
{
	return PI*r*r*h;
}
int main()
{
	int side;
	float rad, ht;

	cout<<"enter side :"<<endl;
	cin>>side;
	cout<<"enter radius :"<<endl;
	cin>>rad;
	cout<<"enter height :"<<endl;
	cin>>ht;
	cout<<"volume of cube"<<volume(side)<<endl;
	cout<<"volume of Sphere "<<volume(rad)<<endl;
	cout<<"volume of Cylinder "<<volume(rad,ht);
	return 0;
}