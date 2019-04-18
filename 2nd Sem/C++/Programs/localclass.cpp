//Local classes: when a class is declared within a function, it is known only to that function and unknown outside of it.
#include<iostream>
using namespace std;

void f();

int main()
{ 
 f();
 //myclass not known here
     return 0; 
 }

void f()
{   
   class myclass
   {
        int i;
    public:
         void puti( int n)
         {
               i = n;
         }
         int geti()
         {
         	return i;
         }
    }ob;

    ob.puti(10);
    cout<<ob.geti();
  }