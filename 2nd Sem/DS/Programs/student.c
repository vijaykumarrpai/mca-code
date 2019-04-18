#include<stdio.h>
int main()
{
	int student[10];
	int sub1, sub2, sub3, sub4, sub5;
	int i, total;
        for(i=0;i<5;i++)
	{
	printf("\n Enter marks of five subjects:");
	scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);
	total = sub1 + sub2 + sub3 + sub4 + sub5;
	printf("%d",total);
	}
}
