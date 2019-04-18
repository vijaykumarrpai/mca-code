#include<iostream> 
using namespace std;
class ebill 
{ 
     private: 
     int cno; 
     char cname[20]; 
     int units; 
     double bill; 
     public: 
                void get() 
        { 
                 cout<<"Enter Customer No : "<<endl; 
                 cin>>cno; 
                 cout<<"\nEnter Customer Name : "<<endl; 
                 cin>>cname; 
                 cout<<"\nEnter No. of Units used : "<<endl; 
                 cin>>units; 
         } 
                void put() 
         { 
                cout<<"\nCustomer No is : "<<cno; 
                cout<<"\nCustomer Name is : "<<cname; 
                cout<<"\nNumber of Units Consumed : "<<units; 
                cout<<"\nBill of Customer : "<<bill; 
         } 
                void calc() 
        { 
                if(units<=100) 
                       bill=units*1.20; 
               else if(units<=300) 
                       bill=100*1.20+(units-100)*2; 
               else 
                       bill=100*1.20+200*2+(units-300)*3; 
         } 
}; 
             int main() 
     { 
             ebill p1; 
             p1.get(); 
             p1.calc(); 
             p1.put();  
             return 0;
      } 