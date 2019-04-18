//program to access data members and object's address using this pointer
#include <iostream>
using namespace std;
class test
{
	int a, b;
public:
	void show()
	{
		a=10;
		b=20;
		cout<<"object address is"<<this<<endl; //here this will return current obj address
		cout<<" a= "<<this->a<<endl;
		cout<<" b= "<< this->b<<endl;
	}
};
int main()
{
	test t1;
	t1.show();
	return 0;
}