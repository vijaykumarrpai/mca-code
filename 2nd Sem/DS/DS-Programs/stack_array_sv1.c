#include<stdio.h>
#define MAX 100


void push(int s[], int* t);
int pop(int s[], int* t);
void display(int s[], int* t);
int n;
int main(void)
{
    //clrscr();
int stack[MAX],choice,top,x,i,ele;
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                //printf("Enter the element to push \n");
                //scanf("%d",&ele);
                push(stack, &top);
                break;
            }
            case 2:
            {
                i = pop(stack, &top);
                printf("\n\t The popped elements is %d", i);
                break;
            }
            case 3:
            {
                display(stack, &top);
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
    while(choice!=4);
    return 0;
}
void push(int s[], int* top)
{
    int ele;
    if(*top >= n-1)
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
       printf(" Enter a value to be pushed:");
       scanf("%d",&ele);
        *top += 1;
        s[*top]=ele;
    }
}
int pop(int s[], int* top)
{
    int item;
    if(*top <= -1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        item = s[*top];
        //printf("\n\t The popped elements is %d",stack[top]);
        *top -= 1;
    }
  return item;
}
void display(int stack[], int * top)
{
    int i;
    if(*top>=0)
    {
        printf("\n The elements in STACK are \n");
        for(i=*top; i>=0; i--)
            printf("\t%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}
 
