//exception handling demo
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	try{
		cout<<"enter two numbers";
		cin>>a>>b;
		if(b==a) 
			throw 0;
		cout<<"Division = "<<a/b;
	   }

	catch(int x)
	{
		cout<<"Division not possible";
	}
	
}



/*#include<iostream>
using namespace std;
int main()
{
	try
	{
		cout<<"before throw\n";
		throw 1;
		cout<<"After throw \n";
	}
	catch (int x){
		cout<<"x is printed";
	}
 cout<<"thank you";
}*/
