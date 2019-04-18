#include <iostream>
using namespace std;
class cube
{
	int x,y,z; 
public:

	cube(int a=0, int b=0, int c=0)
	{
		x=a;
		y=b;
		z=c;
	}
	int volume()
	{
		return x*y*z;
	}
	
};
int main()
{
  cube t1(2,3,4), t2;
  
  cout<<t1.volume()<<endl;
  cout<<t2.volume();
  return 0;
}