#include<stdio.h>
int main() {
	int arr[100], n , c, d, swap;
	printf("Enter the number of elements");
	scanf("%d", &n);

	printf("Enter %d integers :", n);
	for(c = 0; c < n; c++) {
		scanf("%d", &arr[c]);
	}
	for(c = 0; c <(n - 1); c++) {
		for(d = 0; d < n - c - 1; d++) {
			if(arr[d] > arr[d+1]) {
				swap = arr[d];
				arr[d] = arr[d + 1];
				arr[d + 1] = swap;
			}
		}
	}
	printf("After performing bubblesort : \n");
	for(c = 0; c < n; c++) 
		printf("%d\t", arr[c]);
		return 0;
}