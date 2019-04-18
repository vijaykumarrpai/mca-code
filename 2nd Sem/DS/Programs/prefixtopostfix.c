#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 5
char stack[SIZE][SIZE];
int top=-1;

void pop(char *a1)
{
  if(top==-1)
  {
    printf("Stack is empty");
    return;
  }
  else
  {
    strcpy(a1,stack[top]);
    top--;
  }
}

void push(char *str)
{
  if(top=SIZE-1)
  printf("Stack is full");
  else
  {
    top++;
    strcpy(stack[top],str);
  }
}

int main()
{
  char s[SIZE], str1[SIZE], str2[SIZE], str[SIZE],st1[SIZE];
  char s1[2], temp[2];
  int i = 0,j,len;

  printf("Enter the prefix expression: ");
  scanf("%s",st1);
  len=strlen(st1);

  for(i=0,j=len-1;j>=0;j--,i++)
  {
      s[i]=st1[j];
      printf("%c",st1[j]);
    }
    s[i]='\0';
    printf("\n");
    i=0;
    while(s[i]!='\0')
    {
        if (s[i] == ' ')
        i++;
        if(s[i] == '^' || s[i] == '*' || s[i] == '-' || s[i]== '+' || s[i] == '/')
        {
          pop (str1);
          pop (str2);
          temp[0] = s[i];
          temp[1] = '\0';
          strcat(str1,str2);
          strcat (str1, temp);
          strcpy(str, str1);
          push(str);
}

else
{
temp[0] = s[i];
temp[1] = '\0';
strcpy (s1, temp);
push (s1);
}
i++;
}
printf("\nThe postfix expression is: %s", stack[0]);
}
