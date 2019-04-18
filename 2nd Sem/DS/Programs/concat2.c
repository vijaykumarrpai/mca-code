#include<stdio.h>
#include<string.h>
int main()
{
  char str1[100], str2[100];
  printf("Enter first substring:");
  gets(str1);
  printf("Enter second substring:");
  gets(str2);

  strcat(str1,str2);

  printf("%s\n",str1);

  return 0;
}
