#include<iostream>
#include<cmath>
#define PI 3.14
using namespace std;
class area
{
public:
  int choice,r,h,cyl,cir,cone;
  void read()
  {
    cout<<"Enter the radius and height :"<<endl;
    cin>>r>>h;
  }
  void compute()
  {
    cout<<"Enter your choice:";
    cin>>choice;
  switch(choice)
  {
    case 1 : cyl = 2*PI*r*(r+h);
    cout<<cyl<<endl;
    break;

    case 2 : cir = PI * r * r;
    cout<<cir<<endl;
    break;

    case 3 : cone = PI * r * (r + sqrt(h*h+r*r));
    cout<<cone<<endl;
    break;

    default : cout<<"Wrong choice!";
  }
}
}s;

int main()
{
s.read();
s.compute();
}
