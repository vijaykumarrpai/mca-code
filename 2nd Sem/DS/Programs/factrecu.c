#include<stdio.h>
int factr(int n);
int main(void)
{
  int n;
  printf("Enter a number to find its factorial:");
  scanf("%d",&n);
  printf("Factorial of %d is :%d\n",n,factr(n));
  return 0;
}
int factr(int n)
{
    if(n>=1)
    return n*factr(n-1);
    else
    return 1;
}
