#include <iostream>
using namespace std;
class X
{
 
 public:
 	static int i;
     X(){};
};

int X::i=1;

int main()
{
 X obj;
 cout << obj.i<<endl;   // prints value of i
}

