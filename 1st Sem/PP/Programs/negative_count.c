#include <stdio.h>
int main()
{
    int n, count_n = 0, count_p = 0;

    printf("Enter a list of numbers, input 0 as last element in the list\n");
    // Eg: 2 3 -4 -5 -6 -3 0
    while (1)
    {
        scanf("%d", &n);

        if (n < 0)
        {
            printf("%d\n", n);
            count_n++;
        }
        else if(n > 0)
        {
            printf("%d\n", n);
            count_p++;
        }
        else{
            break;
        }
    }

    printf("Negative Count: %d\n", count_n);
    printf("Positive Count: %d\n", count_p);
}