#include <stdio.h>
int main()
{
    int n, m, i, j, k;
    printf("Enter limit: \n");
    scanf("%d", &n);
    printf("\n");

    for (i = 0; i < n; i++)
    {
        m = 1;
        for (k = 0; k < n - i; k++)
        {
            printf(" ");
            // printf("\t");
        }

        for (j = 0; j <= i; j++)
        {
            printf(" %d ", m);
            // printf("\t%d\t", m);
            m = (m * (i - j) / (j + 1));
        }
        printf("\n");
    }
}