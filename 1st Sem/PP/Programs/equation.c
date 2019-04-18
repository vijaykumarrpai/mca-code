#include<stdio.h>
#include<math.h>

float calculate(float x)
{
    return(3 * x * x + sin(x));
}

int main()
{
    float x;
    printf("Enter a number: \n");
    scanf("%f", &x);

    float result;
    result = calculate(x);
    printf("Result: %f", result);
}