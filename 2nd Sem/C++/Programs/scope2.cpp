#include <iostream>
using namespace std;

class student
{
	int id;
	char name[20];
public:
	void getdata();
	void display();
};
void student :: getdata()
{
	cout<<"enter the student id ";
	cin>>id;
	cout<<"enter student name"<<endl;
	cin>>name;
}
void student :: display()
{
	cout<<"Name of student="<<name<<endl;
	cout<<"SRN is:"<<id;
}
int main()
{
	student stu;
	stu.getdata();
	stu.display();
	return 0;
}