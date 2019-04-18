#include<stdio.h>
#include<stdlib.h>
#define MAX 100


struct queue{
int front, rear;
int items[MAX];
};

int n;

void init(struct queue * pq)
{
  pq->rear = -1;
  pq->front = 0;
}

int pqempty(struct queue * pq)
{
  if (pq->rear < pq->front)
     return 1;
  else
     return 0;
}

int pqfull(struct queue * pq)
{
  if (pq->rear == n-1)
     return 1;
  else
     return 0;
}


void insert(struct queue *q, int ele)
{
    if(pqfull(q))
    {
        printf("\n\t QUEUE over flow\n");
        return;
    }
    else
      {
        q->rear++;
        q->items[q->rear] = ele;
      }
     return;
} 

int remove1(struct queue * q)
{
    int item;
    item = q->items[q->front];
    q->front++;
    printf("\n\t The deleted element is %d\n", item);
    return item;
}

void display(struct queue *q1, struct queue * q2, struct queue * q3)
{
    int j;
     if (pqempty(q1) == 1)
      printf(" Queue 1 is empty \n");
     else
       {
         printf("Elements in Queue 1 are  :\n");
         for(j = q1->front;j <=q1->rear; j++)
            printf("\t%d",q1->items[j]);
        }
      printf("\n");
      if (pqempty(q2) == 1)
      printf(" Queue 2 is empty \n");
      else
       {
         printf("Elements in Queue 2 are  :\n");
         for(j = q2->front;j <=q2->rear; j++)
            printf("\t%d",q2->items[j]);
        }
      printf("\n");
      if (pqempty(q3) == 1)
      printf(" Queue 3 is empty \n");
      else
        {
         printf("Elements in Queue 3 are  :\n");
         for(j = q3->front;j <=q3->rear; j++)
            printf("\t%d",q3->items[j]);
        }
      printf("\n");
    
 }


int main(void)
{
    
int choice,x,ele, pri;
struct queue pq1, pq2, pq3;

    init(&pq1);
    init(&pq2);
    init(&pq3);

    printf("\n Enter the size of all QUEUES[MAX=100]:");
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
                printf("\n Enter the priority number from 1 to 3 :\n");
                scanf("%d", &pri);
                printf(" Enter a value to be inserted:\n");
                scanf("%d",&ele);
       
                switch(pri)
                {
                  case 1:
                      insert(&pq1, ele);
                      display(&pq1, &pq2, &pq3);
                      break;
                  case 2:
                      insert(&pq2, ele);
                      display(&pq1, &pq2, &pq3);
                      break;
                  case 3:
                      insert(&pq3, ele);
                      display(&pq1, &pq2, &pq3);
                      break;
                  default: printf("Invalid Priority Number \n");
                           break;
                 }
                 break;
            case 2:
                 if (pqempty(&pq1) == 0)
                    {
                      x = remove1(&pq1);
                      printf("\n\t %d is deleted from Queue 1 \n", x);
                      display(&pq1, &pq2, &pq3);
                     }
                 else
                   if (pqempty(&pq2) == 0)
                    {
                      x = remove1(&pq2);
                      printf("\n\t Queue 1 is empty \n");
                      printf("\n\t %d is deleted from Queue 2 \n", x);
                      display(&pq1, &pq2, &pq3);
                     }
                 else
                   if (pqempty(&pq3) == 0)
                    {
                      x = remove1(&pq3);
                      printf("\n\t Queue 1 is empty \n");
                      printf("\n\t Queue 2 is empty \n");
                      printf("\n\t %d is deleted from Queue 3\n ", x);
                      printf("\n\t The deleted element is %d", x);
                      display(&pq1, &pq2, &pq3);
                     }
                 else
                    printf("All 3 Queues are empty \n");
                    break;
             case 3:
                display(&pq1, &pq2, &pq3);
                break;
            
             case 4:
                printf("\n\t EXIT POINT ");
                break;
             default:
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)\n");
                           
           }
    }
    while(choice!=4);
    return 0;
}

