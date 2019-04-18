//overloading new and delete operator
#include<iostream>
#include<malloc.h>
#include<stdlib.h>
using namespace std;
class area
{
	int length, breadth;
public:
	area(){}
	area(int l, int b)
	{
		length=l;
		breadth=b;
	}
	void display()
	{
		cout<<"\nArea is ="<<length*breadth<<endl;
	}
	void *operator new(size_t n);
	void operator delete(void *ptr);
};
void *area :: operator new(size_t n)  //overloading new
{
	void *ptr;
	cout<<"\n inside overloaded new ";
	ptr= malloc(n);
	if(ptr==NULL)
	{
		cout<<"\n Allocation Failed ";
		exit(0);
	}
	return ptr;
}
void area :: operator delete(void *ptr) //overloading delete
{
	cout<<"\n inside overloaded delete ";
	free(ptr);
}
int main()
{
	area *ob1, *ob2;
	//the operator function for new gets called and also the constructor is called

	ob1= new area(5,6);
	ob2= new area(3,4);

	ob1->display();
	ob2->display();

	delete ob1;  //function call for delete
	delete ob2;  // function call for delete
}