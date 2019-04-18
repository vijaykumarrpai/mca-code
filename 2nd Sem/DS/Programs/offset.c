#include<stdio.h>
#define SIZE 5
int main(void)
{
  int a[SIZE][SIZE],i,j,m,n,r,c,address = 100,address1 = 100,address2 = 100,address3 = 100,offset;
  printf("\n Enter the number of rows and columns :");
  scanf("%d%d", &m, &n);
  for(i=0;i<m;i++)
  {
  for(j=0;j<n;j++)
  {
    printf("\nEnter a number :");
    scanf("%d", &a[i][j]);
  }
}
  printf("\n Row major order:");
  for(i=0;i<m;i++)
  {
  for(j=0;j<n;j++)
  {
    printf("%d\t", a[i][j]);
 }
  printf("\n");
  printf("\t\t");
}
printf("Enter r and c to find address :");
scanf("%d%d", &r,&c);
if(r<m && c<n)
{
  offset = r*n+c;
  address = offset * sizeof(int) + address;
  address1 = offset * sizeof(char) + address1;
  address2 = offset * sizeof(float) + address2;
  address3 = offset * sizeof(double) + address3;
  printf("Address of Row major : %d",address);
  printf("Address of Row major : %d",address1);
  printf("Address of Row major : %d",address2);
  printf("Address of Row major : %d",address3);
}
else
{
  printf("Invalid");
}
printf("\nColumn major order:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
  printf("%d\t", a[j][i]);
}
printf("\n");
printf("\t\t");
}
if(r<m && c<n)
{
  offset = c*m+r;
  address = offset * sizeof(int) + address;
  address1 = offset * sizeof(char) + address1;
  address2 = offset * sizeof(float) + address2;
  address3 = offset * sizeof(double) + address3;
  printf("Address of Column major : %d",address);
  printf("Address of Column major : %d",address1);
  printf("Address of Column major : %d",address2);
  printf("Address of Column major : %d",address3);
}
else
{
  printf("Invalid");
}
return 0;
}
