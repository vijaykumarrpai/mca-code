#include<iostream>
using namespace std;
int main()
{
	int factorial = 1 , n, i;
	cout<<"Enter the number to find factorial"<<endl;
	cin>>n;

	for(i=1; i<=n;i++)
		factorial = factorial * i;
	cout<<"\n Factorial of"<< n << "is" << factorial;
	return 0;
}
