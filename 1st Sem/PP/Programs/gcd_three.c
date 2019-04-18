#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int gcdArray(int arr[], int n)
{
    int i;
    int result = arr[0];
    for (i = 1; i < n; i++)
        result = gcd(arr[i], result);

    return result;
}

int main()
{
    int n, i;
    printf("Enter the limit: ");
    scanf("%d", &n);

    int arr[20];
    printf("Enter the elements: ");
    
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("GCD of %d numbers: ", n);
    printf("%d\n", gcdArray(arr, n));
}