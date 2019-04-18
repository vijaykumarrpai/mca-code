#include <stdio.h>
int main()
{
    int n, i, j, k = 1;
    printf("Enter limit: \n");
    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= n; i++)
    {
        printf("%d/%d + ", i, i + 1);
    }

    printf("....\n")
}