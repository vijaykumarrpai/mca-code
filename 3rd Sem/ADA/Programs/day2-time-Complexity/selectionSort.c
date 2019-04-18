#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

int main() 
{
	srand(time(NULL));

	int arr[50000], num, i, j, min, temp;
	time_t start, end;
	double tc;
	printf("Enter the number of elements :");
	scanf("%d", &num);

	printf("Enter %d elements : \n", num);
	for(i = 0; i < num; i++) 
	{
		arr[i] = rand() % 10000;
		printf("%d\t", arr[i]);
	}
	
	printf("\n");
	printf("\n");

	start = clock();
	for(i = 0; i < (num - 1); i++) 
	{
		min = i;
		for(j = i + 1; j < num; j++) 
		{
			if(arr[j] < arr[min]) 
			{
				temp = arr[min];
				arr[min] = arr[j];
				arr[j] = temp;
			}
		}
	}

		printf("After performing selection sort : \n");
		for(i = 0; i < num; i++)
			printf("%d\t", arr[i]);
			end = clock();
			tc = (difftime(end,start) / CLOCKS_PER_SEC);
			printf("\n");
			printf("\n Start time : %ld", start);
			printf("\n End time : %ld", end);
			printf("\n");
			printf("\n Time efficiency is : %lf", tc);
			printf("\n");
			return 0;
}