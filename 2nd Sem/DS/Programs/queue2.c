#include <stdio.h>
#define size 100
//void insert(struct queue*);
//int delete(struct queue*);
//void display(struct queue*);
struct queue
{
    int item[size];
    int front;
    int rear;
};
void insert(struct queue *q)
{
 int temp;
 if(q->rear==size-1)
  {
    printf("the queue is full\n");
    return;
  } 
  else
  {
    printf("enter the element to be inserted\n");
    scanf("%d",&temp);
    q->item[++q->rear]=temp;
  }
  return;
}
int delete(struct queue *q)
{
 int temp;
 if(q->rear<q->front)
 {
     printf("the queue is empty\n");
     return 0;
 }
 else
 {
     temp=q->item[q->front];
     --q->front;
 }
 return(temp);
}
void display(struct queue *q)
{
    int i;
    for(i=q->rear;i>=q->front;i--)
    {
        printf("%d\n",q->item[i]);
    }
 return;
}
int main()
{
    int choice;
    struct queue q;
    q.front=0;
    q.rear=-1;
    do
    {
    printf("--------------menu----------------\n");
    printf("1.insert element into the queue\n");
    printf("2.delete an element from the queue\n");
    printf("3.display the element of the queue\n");
    printf("4.exit from the switch\n");
    printf("pls enter your choice\n");
    scanf("%d",&choice);
     switch(choice)
     {
        case 1:
               insert(&q);
               break;
        case 2:
               printf("the deleted item is %d \n",delete(&q));
               break;
        case 3:
               display(&q);
               break;
     }
    }while(choice!=4);
return 0;
}