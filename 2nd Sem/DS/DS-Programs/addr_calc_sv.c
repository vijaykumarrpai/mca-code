#include<stdio.h>
#include<string.h>
#define MAX 10
int main(void)
{
  int arr[MAX][MAX],m,n,i,j;
  int offset,address,r,c,addr;
  printf("Enter total number of rows\t?");
  scanf("%d",&m);
  printf("\nEnter total number of columns\t? ");
  scanf("%d",&n);
  printf("\n Enter number");
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  scanf("%d",&arr[i][j]);
  printf("\n Row-Major order:\n");
  for(i=0;i<m;i++)
  {
     for(j=0;j<n;j++)
     printf("%d\t",arr[i][j]);
     printf("\n");
   }
   printf("calculation of address using row major method\n");
   printf("enter the base address of the array\t:");
   scanf("%d", &addr);
   printf("enter the position of the element to calculate the address\t:");
   scanf("%d %d",&r,&c);
   if((r<m)&&(c<n))
  { 
     offset=r*n+c;
     address=offset*(sizeof(int))+addr;
     printf("the address of element at %d row and %d col is %d\n",r,c,address);
   }
  else
     printf("invalid row and col value\n");
     printf("\n column-major order:\n");
    for(i=0;i<n;i++)
    {
       for(j=0;j<m;j++)
           printf("%d\t",arr[j][i]);
     printf("\n");
   }
    printf("calculation of address using col major method\n");
    printf("enter the base address of the array\t:");
    scanf("%d",&addr);
    printf("enter the row and col whose address you want to calculate\t:");
    scanf("%d%d",&r,&c);
    if((r<m)&&(c<n))
    {
       offset=c*m+r;
       address=offset*(sizeof(int))+(int)addr;
       printf("the address of element at %d row and %d col is %d\n",r,c,address);
     }  
    else
    printf("invalid row and col value\n");
   return 0;
}

