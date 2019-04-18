#include <stdio.h>

int isEven(int n);
float median(int a[], int n);
int bubble_sort(int a[], int n);

int main()
{
    int n, i, a[20];
    printf("Enter array limit: \n");
    scanf("%d", &n);

    printf("Enter array elements: \n");
    
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    float m = median(a, n);

    printf("Median = %f\n", m);
}

int isEven(int n)
{
    if(n % 2 == 0){
        return 1;
    }
    return 0;
}

int bubble_sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < (n - 1); i++)
    {
        for (j = 0; j < (n - i - 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

float median(int a[], int n)
{
    bubble_sort(a, n);

    float mid, mid1, mid2;
    
    if(isEven(n)){
        mid1 = (n / 2);
        mid2 = (n / 2) + 1;
        mid = (mid1 + mid2) / (float)2;
    }
    else{
        mid = (n / 2) + 1;
    }

    return mid;
}