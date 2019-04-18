#include <iostream>
using namespace std;

void fun(int x=20); //default argument with a specific value

int main()
{
	fun(); //call with no parameter
	fun(30); //call with parameter
	fun(); //call with no parameter
	return 0;
}
void fun(int x) //no value during function definition
{
	cout<<x<<endl;
}
