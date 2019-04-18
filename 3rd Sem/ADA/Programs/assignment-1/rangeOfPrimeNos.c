#include <stdio.h>
int main() {
	int num, i, j;
	printf("Enter the number to display range of prime numbers within them\n");
	scanf("%d", &num);
	int prime[num + 1];

	for(i = 1; i <= num; i++) {
		prime[i] = i;
	}

	for(i = 2; i * i <= num; i++) {
		if(prime[i] != 0) {
			// Marking all multiples of i as 0
			for(j = 2 * i; j <= num; j += i) 
				prime[j] = 0;
			}
		}

		for(i = 2; i <= num; i++) {
			if(prime[i] != 0) {
				printf("%d\t", i);
			}
		}
	}