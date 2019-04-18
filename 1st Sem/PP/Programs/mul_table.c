#include<stdio.h>
int main()
{
    int n, m, i, j;
    printf("Enter starting range: \n");
    scanf("%d", &n);

    printf("Enter ending range: \n");
    scanf("%d", &m);

    for(i = n; i <= m; i++){
        printf("Table of %d\n", i);
        for(j = 1; j <= 10; j++){
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
}