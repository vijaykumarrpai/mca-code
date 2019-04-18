#include <stdio.h>
#include <math.h>

int main()
{
    float n, temp;

    printf("Enter your degree: \n");
    scanf("%f", &n);
    temp = n;
    float accuracy = 0.0001, deno, sinx, fsin;

    // Converting degrees to radian
    n = n * (3.142 / 180.0);

    float x1 = n;
    sinx = n;
    fsin = sin(n);

    int i = 1;
    do
    {
        deno = 2 * i * (2 * i + 1);
        x1 = -x1 * n * n / deno;
        sinx = sinx + x1;
        i = i + 1;
    } while (accuracy <= fabs(fsin - sinx));

    printf("Sin(%.0f) = %f\n", temp, sinx);
    return 0;
}