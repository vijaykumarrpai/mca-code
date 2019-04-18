#include<stdio.h>
void pattern1(int n)
{
  if (n < 1)
  return;

  printf("*");
  pattern1(n-1);
}

void pattern(int n)
{
  if(n < 1)
  return;

  pattern1(n);
  printf("\n");
  pattern(n-1);
}

int main()
{
  int n;
  printf("Enter the size:");
  scanf("%d",&n);
  pattern(n);
  return 0;
}
