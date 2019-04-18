#include <stdio.h>

int lcm(int a, int b);

int main()
{
    int a, b, result;
    int prime[100];

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    result = lcm(a, b);
    printf("The LCM of %d and %d is %d\n", a, b, result);
    return 0;
}

int lcm(int a, int b)
{
    static int x = 1;

    if (x % a == 0 && x % b == 0)
    {
        return x;
    }

    x++;

    lcm(a, b);
    return x;
}