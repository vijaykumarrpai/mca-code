#include<stdio.h>
#include<stdlib.h>
#define MAX 100


struct queue{
int front, rear;
int items[MAX];
};

int n;

void insert(struct queue *q)
{
    int ele;
    if(q->rear == (n-1))
    {
        printf("\n\t QUEUE over flow");
        return;
    }
    else
      {
       printf(" Enter a value to be inserted:");
       scanf("%d",&ele);
        q->rear++;
        q->items[q->rear] = ele;
      }
     return;
} 

int remove1(struct queue * q)
{
    int item;
    if(q->rear < q->front)
    {
        printf("\n\t queue under flow");
        return 0;
    }
    else
        {
        item = q->items[q->front];
        q->front++;
         printf("\n\t The deleted element is %d", item);
       
         }
        
    return item;
}

void display(struct queue *q)
{
    int j;
    if(q->rear >= q->front)
    {
        printf("\n The elements in QUEUE are \n");
        for(j = q->front; j >= 0 && j <=q->rear; j++)
            printf("\t%d",q->items[j]);
        
    }
    else
    {
        printf("\n The QUEUE is empty");
    }
   
}
 
int main(void)
{
    
int choice,x,i,ele;
struct queue q;
q.rear = -1; q.front = 0;
    
    printf("\n Enter the size of QUEUE[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t QUEUE OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.INSERT\n\t 2.REMOVE\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                insert(&q);
                 display(&q);
                break;
            }
            case 2:
            {
                i = remove1(&q);
                 display(&q);
                break;
            }
            case 3:
            {
               if(q.rear >= 0 && q.rear <= n-1 )
                display(&q);
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

