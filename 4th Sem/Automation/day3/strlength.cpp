#include<iostream>
using namespace std;
#include<string>
int buggy(string s){
	int counter=0;
	while(counter<s.length()) 
		counter++;
	return counter;
}
int main(){
	string s = "Charlotte and Marlene are angels.";
	cout<<buggy(s)<<endl;
	return 0;
}