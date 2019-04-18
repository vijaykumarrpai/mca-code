#include<iostream>
#include <cstdlib>
using namespace std;
class fan
{
	int speed;
public:
	fan()
	{
		speed=0;
	}
	int operator++()
	{
		//speed=x;
		if(speed>=5)
		{
			speed=0;
			cout<<"Fan turned off : "<<speed<<endl;
		}
		else
		{
		++speed;
		cout<<"The speed of fan is : "<<speed<<endl;
		}

	}
	int operator--()
	{
		//speed=y;
		if(speed<=0)
		{
			speed=5;

		}
		else
		{
		--speed;
		}
		cout<<"The speed of fan is : "<<speed<<endl;
	}
};
int main()
{
	fan ob;
	int ch;
cout<<"1.INCREASE THE SPEED\n2.DECREASE THE SPEED\n3.IF SPEED=6(The fan will turn off)\n"<<endl;
while(1)
{
cout<<"Enter the Choice : "<<endl;
cin>>ch;
switch(ch)
{
	case 1:
	++ob;
	break;
	case 2:
	--ob;
	break;
	case 3:
	exit(0);
	break;
	default:
	cout<<"Wrong choice";
}
}
return 0;
}
