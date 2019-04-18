#include<iostream>

 #include<string.h>
 #include<stdio.h>
 using namespace std;
 class complex  
 {  
  int r;  
  float i;
  public:  
  void read()  
  {  
  cout<<"\nEnter Real Part:";  
  cin>>r;  
  cout<<"Enter Imaginary Part:";  
  cin>>i;  
  }  
  void display()  
  { 
    cout<<endl<< "The Result is=";  
  cout<<r<<"+"<<i<<"i";  
  }  
  complex operator+(complex a2)  
  {  
  complex a;  
  a.r=r+a2.r;  
  a.i=i+a2.i;  
  return a;  
  }  
  complex operator-(complex a2)  
  {  
  complex a;  
  a.r=r-a2.r;  
  a.i=i-a2.i;  
  return a;  
  }  
 };  
 int main()  
 {  
 int ch;  

 complex a,b,c;  
 do  
 {  
  cout<<"\n 1.Addition\n 2.Subtraction\n 3.Exit\n";  
  cout<<"\nEnter the choice :";  
  cin>>ch;  
  switch(ch)  
  {  
  case 1:  
       cout<<"\nEnter The First Complex Number:";  
       a.read();  
       a.display();  
       cout<<"\nEnter The Second Complex Number:";  
       b.read();  
       b.display();  
       c=a+b;  
       c.display();  
       break;  
  case 2:  
       cout<<"\nEnter The First Complex Number:";  
       a.read();  
       a.display();  
       cout<<"\nEnter The Second Complex Number:";  
       b.read();  
       b.display();  
       c=b-a;  
       c.display();  
       break;  
    }
}
while(ch!=3);  
 return 0;  
 } 
