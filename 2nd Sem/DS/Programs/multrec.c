#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter 2 numbers:");
  scanf("%d%d",&a,&b);
  printf("Multiplication:%d",mult(a,b));
}

int mult(int a, int b)
{
  int c, d, sum;
  if(b==1)
  return (a);
  c=b-1;
  d=mult(a,c);
  sum=d+a;
  return sum;
}
