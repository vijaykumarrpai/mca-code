#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter starting range: \n");
    scanf("%d", &x);

    printf("Enter ending range: \n");
    scanf("%d", &y);

    printf("Leap years from %d to %d inclusive: \n", x, y);

    int i, count = 0;

    for(i = x; i <= y; i++){
        if (i % 400 == 0){
            printf("%d\t", i);
            count++;
        }
        else if (i % 4 == 0){
            printf("%d\t", i);
            count++;
        }
    }

    if(count == 0){
        printf("No leap years\n");
    }
    printf("\n");
}