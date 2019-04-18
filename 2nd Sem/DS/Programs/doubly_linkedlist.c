#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *prev;
	struct node *next;
};
typedef struct node NODE;

int is_empty(NODE *list)
{
	if(list==NULL)
	{
		return 1;
	}
	return 0;
}

struct node *create(NODE *list)
{
	int val;
	NODE *temp;
	temp = (NODE *)malloc(sizeof(NODE));
	printf("Enter the values to be pushed\n");
	scanf("%d", &val);
	temp->info = val;
	temp->next = NULL;
	list->prev=NULL;
	list->next=NULL;
	list=temp;
	return temp;
}

struct node *display(NODE *list)
{
	NODE *temp;
	temp = list;
	while(temp!=NULL)
	{
		printf("%d\t",temp->info);
		temp=temp->next;
	}
  return list;
}

struct node *insert_at_beg(NODE *list)
{
	NODE *temp;
	int val;
	temp = (NODE *)malloc(sizeof(NODE));
	printf("Enter the element to be inserted at the beginning: ");
	scanf("%d", &val);
	temp->info = val;
	temp->next = list;
	temp->prev = NULL;
	list->prev = temp;
	list = temp;
	list = display(list);
	return list;
}

int main()
{
	int choice;
	NODE *list;
	list = NULL;
	while(1)
	{
	printf("Enter the choice\n");
	printf("1.Create a node\n");
	printf("2.Insert a node at the beginning\n");
	printf("3.Display\n");
	printf("4.Exit\n");

	scanf("%d",&choice);
	switch(choice)
	{
		case 1 : list = create(list);
		break;

		case 2 : list = insert_at_beg(list); 
		break;

		case 3 : display(list);
		break;

		case 4 : exit(1); 
		break; 

		default: printf("Wrong choice");
	}
  }
}