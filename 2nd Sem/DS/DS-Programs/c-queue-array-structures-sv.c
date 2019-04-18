#include<stdio.h>
#include<stdlib.h>
#define MAX 100


struct queue{
int front, rear;
int items[MAX];
int count;
};

int n;

void insert(struct queue *q)
{
    int ele;
    if (q->count == n)
    {
        printf("\n\t QUEUE over flow");
        return;
    }
    else
      {
       if(q->rear == (n-1))
       q->rear = 0;
       else
        (q->rear)+=1;
   
       printf(" Enter a value to be inserted:");
       scanf("%d",&ele);
       q->items[q->rear] = ele;
       q->count++;
      }
     return;
} 

int remove1(struct queue * q)
{
    int item;
    if(q->count == 0)
    {
        printf("\n\t queue under flow");
        return 0;
    }
    if (q->front == (n-1))
       q->front = 0;
    else
       q->front++;
    item = q->items[q->front];
    q->count--;
    return item;
}

void display(struct queue *q)
{
    int j,i;
    if(q->count == 0)
     {
     printf("\n The QUEUE empty"); 
     return;
      }
    else
      {
        i = (q->front+1)%n;
        printf("\n The elements in QUEUE are \n");
        for(j =0;j < q->count; j++)
            {
              printf("\t%d",q->items[i]);
              i = (i+1)%n;
            }
       }
      return;
}
 
int main(void)
{
    
int choice,x,i,ele;
struct queue cq;
    cq.count = 0;
    printf("\n Enter the size of QUEUE[MAX=100]:");
    scanf("%d",&n);
    cq.rear = n-1;  cq.front = n-1;
    printf("\n\t CIRCULAR QUEUE OPERATIONS USING ARRAY");
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
                insert(&cq);
                display(&cq);
                break;
            }
            case 2:
            {
                i = remove1(&cq);
                printf("\n\t The deleted element is %d", i);   
                   
                if(cq.count > 0)
                  display(&cq);
                break;
            }
            case 3:
            {
              if(cq.count > 0)
                display(&cq);
              else
                printf("\n The QUEUE empty"); 
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

