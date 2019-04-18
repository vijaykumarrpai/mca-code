
//note: Saddle point M of a matrix is the smallest element in row 'i' and largest  element in column 'j'.
#include<stdio.h>
int main(void)
{
  int a[10][10], i, j, k, m, n, min, max, col; 
  printf("enter order m, n of mxn matrix\t:");
  scanf("%d%d",&m,&n); 
  printf("enter elements row-wise\n"); 
  for(i=0; i<m; i++) 
  for(j=0; j<n; j++) 
  scanf("%d",&a[i][j]); 
  for(i=0; i< m; i++) 
 {
   for(j=0; j<n; j++) 
   printf("%4d", a[i][j]);  
  printf("\n"); 
}
min=a[0][0];
  for(i=0; i<m; i++) 
  {
   
  for(j=0; j<n; j++)
   {
    if(a[i][j]<min) 
   {
    min=a[i][j]; 
    //col=j;
   }
 } 
printf("min element is %d\n",min);
}
return 0; 
} 

