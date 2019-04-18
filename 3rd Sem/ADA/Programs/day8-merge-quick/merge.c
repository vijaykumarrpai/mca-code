#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
void mergesort(int a[],int i,int j);
void merge(int a[],int i1,int j1,int i2,int j2);
 
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
        printf("%d\t", a[i]);
    }

    printf("\n");
	printf("\n");

    start = clock();
    mergesort(a,0,n-1);
    
    printf("After performing merge sort : \n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
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

void mergesort(int a[],int i,int j)
{
    int mid;
    
    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(a,i,mid);      
        mergesort(a,mid+1,j);    
        merge(a,i,mid,mid+1,j);    
    }
}
 
void merge(int a[],int i1,int j1,int i2,int j2)
{
    int temp[50];   
    int i,j,k;
    i=i1;    
    j=i2;   
    k=0;
    
    while(i<=j1 && j<=j2)   
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    
    while(i<=j1)   
        temp[k++]=a[i++];
        
    while(j<=j2)   
        temp[k++]=a[j++];

    for(i=i1, j=0; i <= j2; i++, j++)
        a[i]=temp[j];
}