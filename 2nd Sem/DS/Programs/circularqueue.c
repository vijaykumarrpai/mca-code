#include<stdio.h>
#include<stdlib.h>
#define MAXQUEUE 4
struct queue
{
	int items[MAXQUEUE];
	int front, rear;
};

int  empty(struct queue *cq);
void insert(struct queue *cq);
int  remove1(struct queue *cq);
void display(struct queue *cq);

int main(void)
{
	struct queue cq;
	cq.rear = cq.front = -1;

	int choice;

	while(1)
	{
	printf("--------------menu----------------\n");	
	printf("Enter the choice:\n");
	printf("1.Insert\n");
	printf("2.Delete\n");
	printf("3.Display\n");
	printf("4.Exit\n");

	scanf("%d", &choice);
	printf("\n");
	
	switch(choice)
	{
		case 1 : insert(&cq);
		break;

		case 2 : remove1(&cq);
		break;

		case 3 : display(&cq);
		break;

		case 4 : exit(1);
		break;

		default : printf("Wrong choice"); 
				  printf("\n");
		break;
		}
	}
}

int empty(struct queue *cq)
{
	if (cq->front == -1)
	{
		return 1;
	}
	return 0;
}

 int full(struct queue *cq)
 {
 	if ((cq->front == 0 && cq->rear == MAXQUEUE - 1) || (cq->front == cq->rear + 1))
 	{
 		return 1;
 	}
 	return 0;
 }

void insert(struct queue *cq)
{
	if(full(cq))
	{
		printf("Queue Overflow\n");
		printf("\n");
	}
	else
	{
		int x;
		printf("Enter the element to be inserted:");
		scanf("%d", &x);
		printf("\n");

		if(cq->rear == -1)
		{
			(cq->front)++;
			(cq->rear)++;
		}
		else if(cq->rear == MAXQUEUE - 1 && cq->front > 0)
		{
			cq->rear = 0;
		}
		else
		{
			(cq->rear)++;
		}

	cq->items[cq->rear] = x;
	printf("Element inserted is:%d\n",x);

	display(cq);
	}
}

int remove1(struct queue *cq)
{
	if(empty(cq))
	{
		printf("Queue underflow");
		printf("\n");
	}
	else
	{
		int ele;
		ele = cq->items[cq->front];

		if(cq->front == cq->rear)
		{
			cq->front= -1;
			cq->rear= -1;
		}
		else if(cq->front == MAXQUEUE - 1 && cq->rear < cq->front)
		{
			cq->front = 0;
		}
		else
		{
			(cq->front)++;
		}

		printf("Element removed is:%d\n", ele);
		printf("\n");
		display(cq);
	}
}

void display(struct queue *cq)
{
	if(empty(cq))
	{
		printf("Queue is empty\n");
		printf("\n");
	}
	else
	{	
		printf("\n");
		printf("Elements in the queue:\n");

		int i;

		if(cq->front > cq->rear)
		{
			for(i = cq->front; i<MAXQUEUE; i++)
			{
				printf("%d", cq->items[i]);
			}
			for(i=0; i<=cq->rear; i++)
				printf("%d", cq->items[i]);

			printf("\n");
		}
		else
		{
			for(i = cq->front; i<=cq->rear;i++)
				printf("%d\t",cq->items[i]);

			printf("\n");
		}

		printf("\n");
		printf("Front:%d\n", cq->front);
		printf("Rear:%d\n", cq->rear);
		printf("\n");
	}
}

