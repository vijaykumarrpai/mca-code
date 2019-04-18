#include <stdio.h>
int main()
{
    int n, i, j, k = 1;
    printf("Enter limit: \n");
    scanf("%d", &n);
    printf("\n");

    printf("1 + ");
    for (i = 2; i <= n; i++)
    {
        printf("1/%d + ", i);
    }

    printf("....\n");
}