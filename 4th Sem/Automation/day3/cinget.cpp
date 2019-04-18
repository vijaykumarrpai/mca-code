#include<iostream>
using namespace std;
int main(int argc, char* argv[]) {
	int i;
	char c,c2;
	cout<<"Please enter your favorite character: ";
	cin.get(c).get();
	cout<<"Please enter your second favorite character: ";
	cin.get(c2).get();
	cout<<"The first character you entered is "<<c;
	cout<<", and the second one is "<<c2;
}