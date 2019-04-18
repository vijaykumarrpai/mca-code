// parameterized constructor in inheritance
#include <iostream>
#include <string.h>
using namespace std;
class stu
{
	char name[10], course[10];
public:
	stu(){}
	stu(char name[10], char course[10])
	{
		strcpy(this->name, name);
		strcpy(this->course, course);
	}
    void showstu()
    {
    	cout<<"Name ="<<name<<endl;
    	cout<<"Course ="<<course<<endl;
    }
};
class marks:public stu
{
	int m, p, c;
public:
	marks(char name[10], char course[10], int m, int p, int c)
	{
		stu::stu(name, course);
		this->m=m;
		this->p=p;
		this->c=c;
	}
	void showmarks()
	{
		cout<<m<<ends<<p<<ends<<c;
	}
};
int main()
{
	marks m('Ram', 'MCA',60,70,80);
	m.showstu();
	m.showmarks();
	return 0;
}