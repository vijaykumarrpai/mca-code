#include<stdio.h>

int fibo(int n)
{
    int a = 0, b = 1;
    int next = a + b;

    while(n--){
        printf("%d ", next);
        a = b;
        b = next;
        next = a + b;
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    fibo(n);
}
