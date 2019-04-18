#include<stdio.h>
int main(void) {
	int arr[100], search, n, c;
	printf("Enter the number of elements : ");
	scanf("%d", &n);

	printf("Enter the elements");

	for(c = 0; c < n; c++) {
		scanf("%d", &arr[c]);
	}

	printf("Enter the number to search");
	scanf("%d", &search);

	for(c = 0; c < n; c++) {
		if(arr[c] == search) {
			printf("%d is located at : %d\n", search, c + 1);
			break;
		}
	}
	if(c == n) 
		printf("%d is not present at location :" , search);
	return 0;
}