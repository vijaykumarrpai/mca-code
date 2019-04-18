#include<stdio.h>
int main(void) {
	int num, i, count = 0;
	printf("Enter the number to check whether it is prime or not : ");
	scanf("%d", &num);

	for(i = 1; i <= num; i++) {
		if(num % i == 0) {
			count++;
		}
	}

	if(count == 2) {
		printf("%d is a prime number", num);
	} else {
		printf("%d is not prime number", num);
	}
	return 0;
}