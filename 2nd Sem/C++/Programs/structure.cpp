#include <iostream>
using namespace std;
struct employee
{
	char name[50];
	int age;
	char des[50];
	long sal;
	void read()
	{
		cout<<"enter the name of employee"<<endl;
		cin>>name;
		cout<<"enter age"<<endl;
		cin>>age;
		cout<<"enter salary"<<endl;
		cin>>sal;
		cout<<"enter designation"<<endl;
		cin>>des;
		
	}
	void display()
	{
		cout<<name<<endl;
		cout<<age<<endl;
		cout<<des<<endl;
		cout<<sal<<endl;
	}
}s;

int main()
{
	s.read();
	s.display();
	return 0;
}