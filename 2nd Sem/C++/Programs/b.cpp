#include <iostream>
using namespace std;
int main()
{
	int choice;
	cout<<"Choose any Beverages"<<endl<<"1.Pepsi 2.Coke 3.Tea 4.Coffee 5.Water"<<endl;
	cin>> choice;
	switch(choice)
	{
		case 1: cout<<"You choose Pepsi"<<endl;
				break;
		case 2: cout<<"You choose Coke"<<endl;
				break;
		case 3: cout<<"You choose Tea"<<endl;
				break;
		case 4: cout<<"You choose Coffee"<< endl;
				break;
		case 5: cout<<"You choose Water"<<endl;
				break;
		default: cout<<"Invalid input"<<endl;

	}
	
	return 0;
}