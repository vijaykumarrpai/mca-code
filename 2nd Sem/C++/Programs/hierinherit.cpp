#include<iostream>
using namespace std;

class Number
{
	int a;
public:
	void getdata()
	{
		cout<<"Enter the number :"<<endl;
		cin>>a;
	}

	void putdata()
	{
		cout<<a<<endl;
	}
};

class Area : public Number
{
	float area,r;
public:
	void getdata()
	{	
		cout<<"Enter value of radius :"<<endl;
		cin>>r;
		area = 3.14*r*r;
	}

	void putdata()
	{
		cout<<"Area of Circle is :"<<area<<endl;
	}
};

class Volume : public Number
{
	int volume,s;
public:
	void getdata()
	{	
		cout<<"Enter value of cube: "<<endl;
		cin>>s;
		volume = s*s*s;
	}

	void putdata()
	{
		cout<<"Volume of Cube is : "<<volume<<endl;
	}
};

int main()
{
	int ch;
	cout<<"1.Area of Circle"<<endl;
	cout<<"2.Volume of Cube"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>ch;

	if(ch==1)
	{
		Area r;
		r.getdata();
		r.putdata();
	}

	else if (ch == 2)
	{
		Volume v;
		v.getdata();
		v.putdata();
	}
	else
		cout<<"Invalid choice";
	return 0;
}