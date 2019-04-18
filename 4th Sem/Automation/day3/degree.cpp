#include<iostream>
using namespace std;
int main(){
	int shape;
	double degree,transition;
	shape=17;
	transition=100.0/shape;
	degree=0;
	while(true){
		if(degree>100.0){
			cout<<degree<<" is greater than 100.0\n";
			break;
		}
		else if(degree<100.0) 
			cout<<degree<<" is smaller than 100.0\n";
		else
			cout<<degree<<" is equal to 100.0\n";
		degree+=transition;
	}
  return 0;
}