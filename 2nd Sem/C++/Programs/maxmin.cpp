#include<iostream>
using namespace std;
class maxmin
{
public:
  int arr[5], i ,max, min;
  void read()
  {
    cout<<"Enter the array elements :"<<endl;
    for(i=0;i<5;i++)
    {
      cin>>arr[i];
    }
  }
  void compute()
  {
    min=arr[0], max=arr[0];
    for(i=0;i<5;i++)
    {
      if(arr[i]<min)
      {
        min=arr[i];
      }
      if(arr[i]>max)
      {
        max=arr[i];
      }
    }
  }
  void display()
  {
    cout<<min<<endl;
    cout<<max<<endl;
  }
}s;

int main()
{
  s.read();
  s.compute();
  s.display();
  return 0;
}
