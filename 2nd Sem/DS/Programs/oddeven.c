#include<stdio.h>
int main()
{
   
    int i,j,k;
    
    int NUM[10] = {1,2,3,4,5,6,7,8,9,10};
    
    int ODD[10];
    int EVEN[10];
    
    j = 0;
    k = 0;
    for(i = 0; i<10 ; i++){
        
        if(NUM[i]%2 == 0){
            EVEN[j] = NUM[i];
            j++;
        }else{
            ODD[k] = NUM[i];
            k++;
        }
    }
    
    printf("Even numbers : ");
    for(i = 0;i<j; i++){
        printf("%d ",EVEN[i]);
    }
    printf("\nOdd numbers : ");
    for(i = 0;i<k; i++){
        printf("%d ",ODD[i]);
    }
    printf("\n");
}