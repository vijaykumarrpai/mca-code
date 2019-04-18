#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *xp, int *yp);
void generateRandoms(int a[], int b[], int c[], int d[], int lower, int upper, int count);
void printArray(int a[], int n);
void bubble_sort(int a[], int n);
void selection_sort(int a[], int n);
void merge(int arr[], int l, int m, int r);
void merge_sort(int arr[], int l, int r);
int partition(int arr[], int low, int high);
void quick_sort(int arr[], int low, int high);
void store_to_file(double time_spent, double time_spent_2, double time_spent_3, double time_spent_4);

int main()
{
	int a[100000], b[100000], c[100000], d[100000], n, l, u;
	
	srand(42);

	printf("Enter number of elements: \n");
	scanf("%d", &n);

	printf("Enter lower limit: \n");
	scanf("%d", &l);

	printf("Enter upper limit: \n");
	scanf("%d", &u);

	generateRandoms(a, b, c, d, l, u, n);
	// printArray(a, n);
	
	clock_t begin = clock();
	
	bubble_sort(a, n);

	clock_t end = clock();

	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

	// printArray(a, n);
	printf("Time taken for bubble sort: %f\n", time_spent);

	clock_t begin_2 = clock();
	
	selection_sort(b, n);

	clock_t end_2 = clock();

	double time_spent_2 = (double)(end_2 - begin_2) / CLOCKS_PER_SEC;

	// printArray(a, n);
	printf("Time taken for selection sort: %f\n", time_spent_2);

	clock_t begin_3 = clock();
	
	merge_sort(c, 0, n);

	clock_t end_3 = clock();

	double time_spent_3 = (double)(end_3 - begin_3) / CLOCKS_PER_SEC;

	// printArray(a, n);
	printf("Time taken for merge sort: %f\n", time_spent_3);

	clock_t begin_4 = clock();
	
	quick_sort(d, 0, n);

	clock_t end_4 = clock();

	double time_spent_4 = (double)(end_4 - begin_4) / CLOCKS_PER_SEC;

	// printArray(a, n);
	printf("Time taken for quick sort: %f\n", time_spent_4);

	store_to_file(time_spent, time_spent_2, time_spent_3, time_spent_4);

    system("gnuplot");
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void generateRandoms(int a[], int b[], int c[], int d[], int lower, int upper, int count)
{
    int i;

    for (i = 0; i < count; i++) {
        int num = (rand() % (upper - lower + 1)) + lower;
        a[i] = num;
        b[i] = num;
        c[i] = num;
        d[i] = num;
    }
}

void printArray(int a[], int n)
{
	int i;

	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}

	printf("\n");
}

void bubble_sort(int a[], int n)
{
	
	int i, j;

   	for (i = 0; i < n - 1; i++){
       	for (j = 0; j < n - i - 1; j++){
       		if (a[j] > a[j + 1])
              	swap(&a[j], &a[j + 1]);
       } 
   	}      
           
}

void selection_sort(int a[], int n)
{
	int i, j, min;
 
    for (i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
          if (a[j] < a[min])
            min = j;
 
        swap(&a[min], &a[i]);
    }
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    int L[n1], R[n2];
 
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
void merge_sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
 
        merge_sort(arr, l, m);
        merge_sort(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];    
    int i = (low - 1);  
 
    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;   
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 
void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

void store_to_file(double time_spent, double time_spent_2, double time_spent_3, double time_spent_4)
{
	FILE *fptr;

    fptr = fopen("speed2.txt", "w+");
 
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }

    fprintf(fptr, "Time taken for bubble sort: %lf\n", time_spent);
    //fprintf(fptr, "Time taken for selection sort: %lf\n", time_spent_2);
    //fprintf(fptr, "Time taken for merge sort: %lf\n", time_spent_3);
    //fprintf(fptr, "Time taken for quick sort: %lf\n", time_spent_4);

    fclose(fptr);
}