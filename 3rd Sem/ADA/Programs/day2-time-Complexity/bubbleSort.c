#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

	srand(time(NULL));
	
	int arr[50000], num, c, d, swap;
	time_t start, end;
	double tc;
	printf("Enter the number of elements");
	scanf("%d", &num);


	printf("Enter %d integers : \n", num);
	for(c = 0; c < num; c++) {
		arr[c] = rand() % 10000;
		printf("%d\t", arr[c]);
	}

	printf("\n");
	printf("\n");

	start = clock();
	for(c = 0; c <(num - 1); c++) {
		for(d = 0; d < num - c - 1; d++) {
			if(arr[d] > arr[d+1]) {
				swap = arr[d];
				arr[d] = arr[d + 1];
				arr[d + 1] = swap;
			}
		}
	}
	printf("After performing bubblesort : \n");
	for(c = 0; c < num; c++) 
	printf("%d\t", arr[c]);
	end = clock();
	tc = (difftime(start,end) / CLOCKS_PER_SEC);
	printf("\n");
	printf("\n Start time : %ld", start);
	printf("\n End time : %ld", end);
	printf("\n");
	printf("\n Time efficiency is : %lf", tc);
	printf("\n");
	return 0;
}