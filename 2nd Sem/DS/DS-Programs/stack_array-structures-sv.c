#include<stdio.h>
#include<stdlib.h>
#define MAX 100

//void push(struct stack*);
//int pop(struct stack*);
//void display(struct stack*);

struct stack{
int top;
int items[MAX];
};

int n;

void push(struct stack *ps)
{
    int ele;
    if(ps->top == (n-1))
    {
        printf("\n\tSTACK is over flow");
       // exit(0);
    }
    else
      {
       printf(" Enter a value to be pushed:");
       scanf("%d",&ele);
        ps->top ++;
        ps->items[ps->top] = ele;
      }
     return;
} 

int pop (struct stack *ps)
{
    int item;
    if(ps->top == -1)
    {
        printf("\n\t Stack is under flow");
        //exit(0);
    }
    else
        item = ps->items[ps->top];
        ps->top --;
        
    return item;
}

void display (struct stack *ps)
{
    int j;
    if(ps->top >= 0)
    {
        printf("\n The elements in STACK are \n");
        for(j = ps->top; j >= 0; j--)
            printf("\t%d",ps->items[j]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}
 
int main(void)
{
    
int choice,x,i,ele;
struct stack s;
s.top = -1;
    
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
                push(&s);
                break;
            }
            case 2:
            {
                i = pop(&s);
                printf("\n\t The popped elements is %d", i);
                break;
            }
            case 3:
            {
                display(&s);
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

