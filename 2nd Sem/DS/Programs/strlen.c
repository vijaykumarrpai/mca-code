#include<stdio.h>
#include<string.h>
int main()
{
  char str[50];
  int len;
  printf("Enter the string :");
  scanf("%s",str);
  len = strlen(str);
  printf("Length of the given string is :%d\n",len);
}
