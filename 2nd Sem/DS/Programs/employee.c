#include<stdio.h>
struct emp
{
    int id ;
    char name[10] ;
    int bpay, allow, ded, npay ;
} e[10] ;

int main()
{
    int i, n ;
    printf("Enter the number of employees : ") ;
    scanf("%d", &n) ;
    for(i = 0 ; i < n ; i++)
    {
        printf("\nEnter the employee number : ") ;
        scanf("%d", &e[i].id) ;
        printf("\nEnter the name : ") ;
        scanf("%s", e[i].name) ;
        printf("\nEnter the basic pay, allowances & deductions : ") ;
        scanf("%d %d %d", &e[i].bpay, &e[i].allow, &e[i].ded) ;
        e[i].npay = e[i].bpay + e[i].allow - e[i].ded ;
    }
    printf("\nEmp. No. Name \t Bpay \t Allow \t Ded \t Npay \n\n") ;
    for(i = 0 ; i < n ; i++)
    {
        printf("%d \t %s \t %d \t %d \t %d \t %d \n", e[i].id,
        e[i].name, e[i].bpay, e[i].allow, e[i].ded, e[i].npay) ;
    }
    return 0;
}
