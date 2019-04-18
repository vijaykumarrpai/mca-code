#include<stdio.h>
#define SIZE 10
int main(void)
{
	int num[SIZE];
	int i;
	int total;
	float avg;
	float diff;

	total = 0;
	for(i=0;i<SIZE;i++)
	{
		scanf("%d", &num[i]);
		total+=num[i];
	}
	avg=(float) total/SIZE;
	printf("\n number difference");
	for(i=0;i<SIZE;i++)
	{
		diff = num[i] - avg;
		printf("\n %d %f",num[i],diff);
	}
	printf("\n average is : %f",avg);
}