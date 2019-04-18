#include<stdio.h>
#include<string.h>

 void push(char item[],int *top,char s[][20])
{
*top=*top+1;
strcpy(s[*top],item);
}

void *pop(int *top,char s[][20])
{
char *item;
item=s[*top];
*top=*top-1;
 return item;
}

void pre_post(char prefix[],char postfix[])
{
   char s[20][20];
   int top,i;
   char symbol,temp[2];
   char *op1,*op2;
   top=-1;
   strrev(prefix);

   for(i=0;i<strlen(prefix);i++)
   {
          symbol=prefix[i];
          temp[0]=symbol;
          temp[1]='\0';
          
          switch (symbol)
          {
             case '+':
             case '-':
             case '*':
             case '/':
             case '^':

                   op1=pop(&top,s);
                   op2=pop(&top,s);
				   strcpy(postfix,op1);
                   strcat(postfix,op2);
                   strcat(postfix,temp);
                   push(postfix,&top,s);

                   break;
             default:
                     push(temp,&top,s);

            }
      }
}

void main()
{
   char prefix[20];
   char postfix[20];
   printf("\n\n Enter the prefix expression \n\n");
   scanf("%s",prefix);
   pre_post(prefix,postfix);
   printf("\n\n The postfix expression is %s \n\n",postfix);
}