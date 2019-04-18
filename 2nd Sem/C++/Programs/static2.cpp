//program to demonstrate static member function

#include <iostream>
using namespace std;
class X
{
 public:
 static void f(){
 
 cout<<"I am a static function"<<endl;
 }
};

int main()
{
 X::f();   // calling member function directly with class name
}
