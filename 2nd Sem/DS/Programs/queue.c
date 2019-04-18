#include<stdio.h>
#include<stdlib.h>
#define MAXQUEUE 10

void insert();
int  remove1();
void display();

int items[MAXQUEUE];
int front = -1, rear = -1;

int main(void)
{
	int choice;

	while(1)
	{
	printf("Enter the choice:\n");
	printf("1.Insert\n");
	printf("2.Delete\n");
	printf("3.Display\n");
	printf("4.Exit\n");

	printf("Enter the choice:");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1 : insert();
		break;

		case 2 : remove1();
		break;

		case 3 : display();
		break;

		case 4 : exit(1);
		break;

		default : printf("Wrong choice"); 
				  printf("\n");
		break;
		}
	}
}

	void insert()
	{
		int item;
		if(rear == MAXQUEUE -1)
			printf("Queue Overflow\n");
		else
	{
		if(front == -1)
			front = 0;
		printf("Enter the element in Queue:");
		scanf("%d", &item);
		rear = rear + 1;
		items[rear] = item;
		}
	}

	int remove1()
	{
		if(front == -1 || front > rear)
		{
			printf("Queue Underflow\n");
			printf("\n");
		} 
		else
		{
			printf("Element deleted from the queue is:%d\n", items[front]);
			front = front + 1;
		}
	}

	void display()
	{
		int i;
		if(front == -1)
			printf("Queue is empty\n");
		else
		{
			printf("Queue is empty\n");
			for(i = front; i <= rear; i++)
				printf("%d\t", items[i]);
			printf("\n");
		}
	}