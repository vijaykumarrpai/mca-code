#include<stdio.h>
int main(void) {
	int c, first, middle, last, n, search, arr[100];
	printf("Enter number of elements : \n");
	scanf("%d", &n);

	printf("Entered %d elements are : \n", n);

	for(c = 0 ; c < n; c++) {
		scanf("%d", &arr[c]);
	}

	printf("Enter the element to be searched : ");
	scanf("%d", &search);

	first = 0;
	last = n - 1;
	middle = (first + last) / 2;

	while(first <= last) {
		if(arr[middle] < search) {
			first = middle + 1;
		} else if(arr[middle] == search) {
			printf("%d element is located at : %d", search, middle + 1);
			break;
		} else {
			last = middle - 1;
			middle = (first + last) / 2;
		}

		if(first > last) {
			printf("%d element is not found ", search);
		}
	}
	return 0;
}