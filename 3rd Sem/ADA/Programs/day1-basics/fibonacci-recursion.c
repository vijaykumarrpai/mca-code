#include<stdio.h> 
#include<stdio.h>
int main() {
	int n;
	printf("Enter the number to get fibonacci series");
	scanf("%d", &n);
	printf("fibonacci series of %d is : %d", n, fibor(n));
	return 0;
}

int fibor(int n) {
	int x,y;
	if(n <= 1)
	return n;
	x = fibor(n - 1);
	y = fibor(n - 2);
	return (x + y);
}