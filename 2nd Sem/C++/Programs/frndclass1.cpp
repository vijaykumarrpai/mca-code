#include <iostream>
using namespace std;
class author   // Container class
{
	char aname[20];
	friend class book;
};
class book           //contained class
{
	char bname[20];
	float price;
	author a; // one class's object derived in another class, this is called Composition
public:
	void getdata()
	{
		cout<<"enter the author name:";
		cin>>a.aname;
		cout<<"enter book price";
		cin>>price;
		cout<<"enter the book name";
		cin>>bname;
		
	}
	void putdata()
	{
		cout<<"*********************************************"<<endl;
		cout<<"Author name is :"<<a.aname<<endl;
		cout<<"Book name :"<<bname<<endl;
		cout<<"Book price ="<<price<<endl;
		cout<<"**********************************************";
	}
};
int main()
{
	book b;
	b.getdata();
	b.putdata();
	return 0;
}