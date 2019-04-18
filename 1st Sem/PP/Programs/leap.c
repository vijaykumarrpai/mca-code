#include<stdio.h>
int main()
{
    int n;
    printf("Enter a year: \n");
    scanf("%d", &n);

    if (n % 400 == 0)
        printf("Leap year\n", n);
    else if (n % 100 == 0)
        printf("Not a leap year\n", n);
    else if (n % 4 == 0)
        printf("Leap year\n", n);
    else
        printf("Not a leap year\n", n);
}