#include<iostream>
using namespace std;
class test
{
public:
  static int a;
  void get()
  {
    a = 10;
    cout<<"a = "<<a<<endl;
  }
};

  int test::a;

  int main()
  {
    test::a = 100;
    test t1;
    t1.get();
    return 0;
  }
