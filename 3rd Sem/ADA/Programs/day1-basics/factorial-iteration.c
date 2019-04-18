#include<stdio.h>
int main(void) {
	int n;
	printf("Enter the number to find its factorial");
	scanf("%d", &n);
	printf("Factorial of %d number is : %d\n", n, fact(n));
	return 0;
}

int fact(int n) {
	int i, fact = 1;
	for(i = 1; i <= n; i++) {
		fact = fact * i;
	}
	return fact;
}