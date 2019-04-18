#include<iostream>
using namespace std;
int square(int n)
{
return n*n;
}

int cube(int n)
{
return n*n*n;
};

int main()
{
int n,r;
power p;
cout<<“\nEnter the Number: \n” ;
cin>>n;
r=p.square(n);
cout<<“\nSquare of “<<n<<” = “<<r<<endl;
r=p.cube(n);
cout<<“\nCube of “<<n<<” = “<<r<<endl;
}