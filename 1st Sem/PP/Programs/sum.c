#include<stdio.h>

int sum(int a[], int n)
{
    int sumx = 0, i;

    for(i = 0; i < n; i++){
        sumx = sumx + a[i];
    }

    return sumx;
}

int main()
{
    int n, i;
    printf("Enter number of elements: \n");
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int total = sum(a, n);
    printf("Sum: %d\n", total);
}