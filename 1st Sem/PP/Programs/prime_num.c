#include<stdio.h>

int isPrime(int n)
{
    int i, flag = 1;

    for(i = 2; i < n; i++){
        if(n % i == 0){
            flag = 0;
            break;
        }
    }

    return flag;
}

int main()
{
    int n, i, rem;
    
    printf("Enter a number: \n");
    scanf("%d", &n);
    int temp = n;

    for(i = 1; i < n; i++){
        if(isPrime(i)){
            rem = n - i;

            if(isPrime(rem)){
                printf("Possible\n");
                break;
            }
            else{
                printf("Not possible")
            }
        }
    }
}