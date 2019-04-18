//handling derived class exception
#include<iostream>
using namespace std;
class base
{

};
class derived : public base
{

};
int main()
{
	derived x;
	try
	{
		throw x;
	}
	catch(base a)
	{
		cout<<"Base class exception\n";
	}
	catch(derived b)
	{
		cout<<"derived class excetion \n";
	}
}
 /*As noticed in the above program, x is a derived class object. when derived class obj
x is thrown, ideally we would expect that catch block with respect to derived class is
2nd catch block to get executed. however, this will not happen. this is becaude, the 
catch block with respect to base class has capability to catch not only base class type 
exception but also derived class exception.
 Hence as a good programming practice, to solve above problem, catch block must be 
 reversed as follows:
*/
 int main()
 {
	derived x;
	try
	{
	throw x;
	}
	catch(derived b)
	{
	cout<<"derived class exception";
	}
	catch(base a)
	{
	cout<<"base class exception";
	}
 }
 
