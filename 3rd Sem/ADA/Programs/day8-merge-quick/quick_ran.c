#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

void swap(int *a, int *b);
void quicksort(int number[],int first,int last);

float read_input(int arr[],int size)
{	
	double avg_t=0;

	for(int i=0;i<size;i++)
	{
		arr[i]=rand()%10000;
	}

	clock_t start = clock();

	quicksort(arr,0,size - 1);

	clock_t end = clock();

	avg_t = (double)(end-start)/CLOCKS_PER_SEC;

	return avg_t;

}
int main()
{	int step=100;
	int arr[10000];
	double arr_avg_t[100];
	int j=0;

	FILE *fptrQ = fopen("qsort.txt","w");
	FILE *fptrQ2 = fopen("qsortn2.txt","w");

	for(int i=500;i<=10000;i+=500)
	{	
		arr_avg_t[j]=read_input(arr,i);
		fprintf(fptrQ ,"%d\t%lf\n",i,read_input(arr,i));
		fprintf(fptrQ2,"%d\t%lf\n",i, i * log(i));
		j++;
	}
	
		fclose(fptrQ);
		fclose(fptrQ2);
		
	for(int i=0;i<100;i++)
	{

	printf("\nAverage time taken for %d inputs is %f", step, arr_avg_t[i]);
	step+=100;
	}
	return 0;
}

void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void quicksort(int number[],int first,int last)
{
   int i, j, pivot, temp;

   if(first<last)
   {
        pivot=first;
        i=first;
        j=last;

        while(i<j)
        {
            while(number[i]<=number[pivot]&&i<last)
            i++;
            while(number[j]>number[pivot])
            j--;
            if(i<j)
            {
                // temp=number[i];
                // number[i]=number[j];
                // number[j]=temp;
				swap(&number[i],&number[j]);
            }
        }

		swap(&number[pivot],&number[j]);
        // temp=number[pivot];
        // number[pivot]=number[j];
        // number[j]=temp;
        quicksort(number,first,j-1);
        quicksort(number,j+1,last);

    }
}