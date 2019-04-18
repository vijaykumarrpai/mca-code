/*C++ Hybrid Inheritance Example

Here is a simple program to illustrate the concept of hybrid inheritance in C++.*/

#include <iostream>
using namespace std;

class A
{
 	public:
 	int x;
};
class B : public A
{
 	public:
 	B()      //constructor to initialize x in base class A
 	{
 	   x = 10;
 	}
};
class C
 {
 	public:
 	int y;
 	C()   //constructor to initialize y
 	{
 	    y = 4;
        }
};
class D : public B, public C   //D is derived from class B and class C
{
 	public:
 	void sum()
 	{
 	    cout << "Sum= " << x + y;
 	}
};

int main()
{
         D obj1;          //object of derived class D
 	obj1.sum();
 	return 0;
}               	//end of program



/*Output

Sum= 14*/
