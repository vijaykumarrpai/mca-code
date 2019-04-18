#include <iostream>
using namespace std;
void exchange(int a[], int &n);
int main()
{
	int a[10], size;
	int i;
	cout<<"enter the array size:";
	cin>>size;
	cout<<"enter the array elements"<<endl;
	for(i=0;i<size;i++)
		cin>>a[i];
	exchange(a,size);
	cout<<"after sorting:"<<endl;
	for(i=0;i<size;i++)
		cout<<a[i]<<endl;
	return 0;
}
void exchange(int a[], int &n)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
}
