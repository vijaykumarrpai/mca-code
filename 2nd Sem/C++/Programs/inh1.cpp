//single level inheritance
#include <iostream>
using namespace std;
class student
{
	int id;
	char name[10];
public:
	void getstu()
	{
		cout<<"enter student id, name =";
		cin>>id>>name;
	}
	void show()
	{
		cout<<"Student Id :"<<id<<endl;
		cout<<"Name  :"<<name<<endl;
	}
};
class phy : private student
{
	float ht, wt;
public:
	void getphy()
	{
		getstu();
		cout<<"enter student's Height and Weight ";
		cin>>ht>>wt;
	}
	void putphy()
	{
		show();
		cout<<"height ="<<ht<<endl;
		cout<<"Weight ="<<wt<<endl;
	}
};
int main()
{
	phy p;
	//p.getstu();
	p.getphy();
	//p.show();
	p.putphy();
}