#include<stdio.h>
#include<math.h>
#include<sys/time.h>
#include<stdlib.h>

void selectionsort();
void bubblesort();


int main()
{
	selectionsort();
	bubblesort();
	system("gnuplot");
	return 0;
}

void selectionsort()
{
	int num, a[1000000], temp, min, i, j, null, choice;
	srand(time(NULL));
	struct timeval tv;
	double ds, de;
	FILE *fp1, *fp2;
	fp1 = fopen("time1.txt", "w+");
	fp2 = fopen("time2.txt", "w+");

	for(num = 500; num <= 30000; num += 500)
	{
		for(i = 0; i < num; i++)
		{
			a[i] = rand()%10000;
		}

		gettimeofday(&tv, NULL);
		ds = tv.tv_sec + (tv.tv_usec/1000000.0);

		for(i = 0; i < num; i++)
		{
			min = i;
			for(j = i+1; j < num; j++)
			{
				if(a[j] < a[min])
					min = j;
			}
			temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}

		gettimeofday(&tv, NULL);
		de = tv.tv_sec + (tv.tv_usec/1000000.0);
		fprintf(fp1, "%d\t%lf\n", num, de-ds);
		fprintf(fp2, "%d\t%d\n", num, num*num);

	}
	fclose(fp1);
	fclose(fp2);
	printf("\n");
}

void bubblesort()
{
	int num, a[1000000], temp, min, i, j, null, choice;
	srand(time(NULL));
	struct timeval tv;
	double ds, de;
	FILE *fp3, *fp4;
	fp3 = fopen("time3.txt", "w+");
	fp4 = fopen("time4.txt", "w+");


	for(num=500; num<=30000; num+=500)
	{
		for(i=0; i<num; i++)
		{
			a[i] = rand()%10000;
		}
		gettimeofday(&tv, NULL);
		ds = tv.tv_sec + (tv.tv_usec/1000000.0);


		for(i=0; i<num-1; i++)
		{
			for(j=0; j<num-1-i; j++)
			{
				if(a[j]>a[j+1])
				{
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
		}
		gettimeofday(&tv, NULL);
		de = tv.tv_sec + (tv.tv_usec/1000000.0);
		fprintf(fp3, "%d\t%lf\n", num, de-ds);
		fprintf(fp4, "%d\t%d\n", num, num*num);
	}
	fclose(fp3);
	fclose(fp4);
	printf("\n");
}

