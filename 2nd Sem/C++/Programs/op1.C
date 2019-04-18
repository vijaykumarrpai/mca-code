#include <iostream>
using namespace std;

class Test
{
   private:
      int count;

   public:
       Test()
       {
        count = 5;
       }

       void operator ++() 
       { 
          count = count+1; 
       }
       void Display()
        { 
          cout<<"Count: "<<count; 
        }
};

int main()
{
    Test t;
    // this calls "function void operator ++()" function
    ++t;    
    t.Display();
    return 0;
}