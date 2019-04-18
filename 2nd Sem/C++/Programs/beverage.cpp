#include<iostream>
using namespace std;
int main()
{
	int choice;
	cout<<"Enter the choice of beverage :"<<endl;
	cin>>choice;

	switch(choice)
	{
	case 1 : cout<<"Pepsi"<<endl;
	break;
	case 2 : cout<<"Coke"<<endl;
	break;
	case 3 : cout<<"Mirinda"<<endl;
	break;
	case 4 : cout<<"7up"<<endl;
	break;
	case 5 : cout<<"Fanta"<<endl;
	}
		
 	return 0;
}

