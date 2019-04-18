#include<iostream>
using namespace std;
int main() {
	double result;
	int numOfPies, numOfPeople;
	numOfPies = 14;
	numOfPeople = 3;
	result = (float)numOfPies/numOfPeople;	
	cout<<numOfPies<<" pies split up evenly between "<<numOfPeople<<" people.\n";
	cout<<"Therefore, each person gets "<<result<<" pies.\n";
	return 0;
}