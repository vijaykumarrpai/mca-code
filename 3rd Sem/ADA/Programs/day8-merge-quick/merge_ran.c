#include<stdio.h>
#include<math.h>
#include<sys/time.h>
#include<stdlib.h>

void mergesort(int a[], int i, int j);
void merge(int a[], int i1, int j1, int i2, int j2);
 
int main()
{
    int n, a[1000000], temp, min, i, j, null, choice;
    srand(time(NULL));
    struct timeval tv;
    double ds, de;
    FILE *fp1, *fp2;
    fp1 = fopen("time1.txt", "w+");
    fp2 = fopen("time2.txt", "w+");

    for(n = 100; n<= 1000; n +=100)
    {
        for(i = 0; i<n; i++)
        {
            a[i] = rand()%10000;
        }
        gettimeofday(&tv, NULL);
        ds = tv.tv_sec + (tv.tv_usec/1000000.0);

        mergesort(a, 0, n-1);
        gettimeofday(&tv, NULL);
        de = tv.tv_sec + (tv.tv_usec/1000000.0);
        fprintf(fp1, "%d\t%lf\n", n, de-ds);
        fprintf(fp2, "%d\t%f\n", n, n*log(n));

    }
    
    return 0;

}
 
void mergesort(int a[], int i, int j)
{
    int mid;
        
    if(i<j)
    {
        mid = (i+j)/2;
        mergesort(a, i, mid);        
        mergesort(a, mid+1, j);    
        merge(a, i, mid, mid+1, j);    
    }
}
 
void merge(int a[], int i1, int j1, int i2, int j2)
{
    int temp[50];    
    int i, j, k;
    i = i1;    
    j = i2;    
    k = 0;
    
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
        
    for(i=i1,j=0;i<=j2;i++,j++)
        a[i]=temp[j];
}
