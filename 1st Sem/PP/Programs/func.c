#include <stdio.h>

void read(int a[], int n);
int largest_func(int a[], int n, int i, int largest);
int sum(int a[], int n);

int main()
{
    int n, a[20];
    printf("Enter the size of array: \n");
    scanf("%d", &n);

    read(a, n);

    int i = 0;
    int large = a[0];
    int final_largest = largest_func(a, n, i, large);
    int final_sum = sum(a, n);
    printf("Largest element in the array: %d\n", final_largest);
    printf("Sum of the array: %d\n", final_sum);
}

void read(int a[], int n)
{
    int i;
    printf("Enter array elements: \n");

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
}

int largest_func(int a[], int n, int i, int largest)
{
    if (i < n)
    {
        if (largest < a[i])
        {
            largest = a[i];
        }
        return largest_func(a, n, i + 1, largest);
    }
    return largest;
}

int sum(int a[], int n)
{
    int total = 0;
    int i;

    for(i = 0; i < n; i++){
        total = total + a[i];
    }

    return total;
}

