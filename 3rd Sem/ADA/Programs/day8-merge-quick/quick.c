#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
void quick_sort(int[],int,int);
int partition(int[],int,int);
 
int main()
{
    srand(time(NULL));

    int a[50000],n,i;
    time_t start, end;
    double tc;
    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf("Entered %d integers : \n", n);
    for(i = 0; i < n; i++)
    {   
        a[i] = rand() % 10000;
        printf("%d\t", &a[i]);
    }   

    printf("\n");
	printf("\n");

    start = clock();
    quick_sort(a,0,n-1);

    printf("After performing quick sort : \n");
    for(i = 0; i < n; i++)
        printf("%d ",a[i]);
    end = clock();
	tc = (difftime(start,end) / CLOCKS_PER_SEC);
    printf("\n");
	printf("\n Start time : %ld", start);
	printf("\n End time : %ld", end);
	printf("\n");
	printf("\n Time efficiency is : %lf", tc);
	printf("\n");
    return 0;        
}
 
void quick_sort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}
 
int partition(int a[],int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;
    
    do
    {
        do
            i++;
            
        while(a[i]<v&&i<=u);
        
        do
            j--;
        while(v<a[j]);
        
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
    
    a[l]=a[j];
    a[j]=v;
    
    return(j);
}