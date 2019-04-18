
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
  for(i=0; i<m; i++) 
  {
   min=a[i][0]; 
  for(j=0; j<n; j++)
   {
    if(a[i][j]<=min) 
   {
    min=a[i][j]; 
    col=j;
   }
 } 
 max=a[0][col]; 
 for(k=0; k< m; k++) 
 {
  if (a[k][col]>=max) 
  max =a[k][col]; 
}
if(max==min) 
printf("saddle point at(%d%d)and element is %d\n", i+1,col+1,a[i][col]);
}
return 0; 
} 

