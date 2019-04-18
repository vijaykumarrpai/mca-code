// multiple inheritance
#include<iostream>
using namespace std;
class student
{
	int id;
	char name[10];
public:
	void getstu()
	{
		cout<<"enter student Id & name :";
		cin>>id>>name;
	}
	void putstu()
	{
		cout<<"Student Id ="<<id<<endl;
		cout<<"Name  ="<<name<<endl;
	}
};
class marks
{
protected:
	int m1, m2, m3;
public:
	void getmarks()
	{
		cout<<"enter 3 subjects marks:"<<endl;
		cin>>m1>>m2>>m3;
	}
	void putmarks()
	{
		cout<<"Subject 1 marks ="<<m1<<endl;
		cout<<"Subject 2 marks ="<<m2<<endl;
		cout<<"Subject 3 marks ="<<m3<<endl;
	}
};
class result : public student, public marks
{
	int tot;
	float avg;
public:
	void show()
	{
		tot=m1+m2+m3;
		avg=tot/3.0;
		cout<<"Total marks of student ="<<tot<<endl;
		cout<<"Avg marks of student ="<<avg<<endl;
	}
};
int main()
{
	result r;
	r.getstu();
	r.getmarks();
	r.putstu();
	r.putmarks();
	r.show();
	return 0;
}