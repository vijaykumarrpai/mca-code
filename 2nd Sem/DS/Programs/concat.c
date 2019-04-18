#include<stdio.h>
int main()
{
  int i=0,j=0;
  char *str1,*str2,*str3;
  printf("Enter first string");
  scanf("%s",str1);
  printf("Enter second string");
  scanf("%s",str2);
  printf("Before concatenation the strings are\n");
  printf("%s",str1);
  printf("%s",str2);
  while(*str1){
      str3[i++]=*str1++;
  }
  while(*str2){
      str3[i++]=*str2++;
  }
  str3[i]='\0';
  printf("After concatenation the strings are\n");
  printf("%s",str3);
}