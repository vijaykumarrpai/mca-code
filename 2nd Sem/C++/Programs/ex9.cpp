//nested try block
#include<iostream>
using namespace std;
int main()
{
	try{
		cout<<"Welcome \n";
		try{
			cout<<"to inner try block\n";
			throw 10;
		}
		catch(int x){
			cout<<"catch is working\n";
			throw x;  //re-thrown exception
		}
	}
	catch(int y)
	{
		cout<<"outer try block";
	}
}