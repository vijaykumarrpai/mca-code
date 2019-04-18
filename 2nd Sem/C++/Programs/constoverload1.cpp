#include<iostream> 
using namespace std;
class integer 
{ 
      private: 
      int a; 
      public: 
                         integer() 
                { 
                          a=0; 
                         cout<<endl<<"Default Constructor Called. "; 
                } 
                         integer(int i) 
                { 
                          a=i; 
                         cout<<endl<<"Constructor with argument called. "; 
                } 
                        ~integer() 
                { 
                     cout<<endl<<"Destructor Called."; 
                } 
                     void get() 
                { 
                         cout<<endl<<"Enter the value of integer : " ; 
                         cin>>a; 
                } 
                         void show() 
                { 
                         cout<<endl<<"The value of integer is :"<<"\t"<<a; 
                } 
 }; 
              int main() 
     {               integer x;
              x.get(); 
              x.show(); 
              integer y(10);
              y.show(); 
	return 0;
     }
