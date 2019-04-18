#include<iostream>
using namespace std;

class Wife
{
  float salary;
  friend class Auditor;
  Wife()
  {
    salary = 10000;
  }
};

class Husband
{
  float salary;
  friend class Auditor;
  Husband()
  {
    salary = 20000;
  }
};

class Auditor
{
public:
  Wife w1;
  Husband h1;
  void display();
};

void Auditor::display()
{
  cout<<"Salary of Wife:"<<w1.salary<<endl;
  cout<<"Salary of Husband:"<<h1.salary<<endl;
}

int main()
{
  Auditor a1;
  a1.display();
}
