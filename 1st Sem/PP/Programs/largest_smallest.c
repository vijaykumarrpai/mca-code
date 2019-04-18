#include<stdio.h>

void func(int *a, int *b, int *c, int *largestx, int *smallesty)
{
    if(*a > *b && *a > *c){
        *largestx = *a;
    }
    else if(*b > *a && *b > *c){
        *largestx = *b;
    }
    else{
        *largestx = *c;
    }

    if(*a < *b && *a < *c){
        *smallesty = *a;
    }
    else if(*b < *a && *b < *c){
        *smallesty = *b;
    }
    else{
        *smallesty = *c;
    }
}

int main()
{
    int a, b, c;
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    int largestx = 0, smallesty = 0;

    func(&a, &b, &c, &largestx, &smallesty);

    printf("Largest = %d\n", largestx);
    printf("Smallest = %d\n", smallesty);
}