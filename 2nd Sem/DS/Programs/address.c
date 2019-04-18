#include <stdio.h>
#define SIZE 10
int main(void)
{
    int arr[10];       
    int *pa;        
    int  i;
    int a[SIZE];
    pa=&arr[0];         
     
    printf("Enter array elements:\n");
    for(i=0; i<SIZE; i++)
    {
        printf("Enter element %02d: ",i+1);
        scanf("%d",pa+i);  
    }
     
    printf("\nEntered array elements are:");
    printf("\nAddress\t\tValue\n");
    for(i=0; i<SIZE; i++)
    {
    printf("%08X\t%03d\n",(pa+i),*(pa+i));
    }
    return 0;
}