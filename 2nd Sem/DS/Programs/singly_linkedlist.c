#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
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
	printf("Enter the values to be entered\n");
	scanf("%d", &val);
	temp->info = val;
	temp->next = NULL;
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
	printf("Enter the element to be inserted at the beginning: \n");
	scanf("%d", &val);
	temp->info = val;
	temp->next = list;
	list = temp;
	list = display(list);
	return list;
}

struct node *insert_at_end(NODE *list)
{
	NODE *temp, *start;
	int val;
	temp = (NODE *)malloc(sizeof(NODE));
	printf("\nEnter the element to be inserted at the end: ");
	scanf("%d",&val);

	temp->info = val;
	temp->next = NULL;

	if(is_empty(list))
	{
		list = temp;
	}
	else
	{
		start = list;
		while (start->next != NULL)
		{
			start = start->next;
		}
		start->next = temp;
	}
	list = display(list);
	return list;
}

struct node *insert_at_pos(NODE *list)
{
	NODE *temp, *prev, *newnode;

	int pos, count = 0;

	int val;
	printf("Enter the element to be inserted : ");
	scanf("%d", &val);

	printf("Enter the position : \n");
	scanf("%d",&pos);

	newnode->info = val;

	if(is_empty(list))
	{
		list = newnode;
	}
	else
	{
		temp = list;
		prev = NULL;

		while(temp->next != NULL)
		{
			prev = temp;
			temp = temp->next;
			count++;

			if(count==pos)
			{
				break;
			}
		}
		prev->next = newnode;
		newnode->next = temp;
	}
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
	printf("3.Insert a node at the end\n");
	printf("4.Insert a node at the position\n");
	printf("5.Display\n");
	printf("6.Exit\n");

	scanf("%d",&choice);
	switch(choice)
	{
		case 1 : list = create(list);
		break;

		case 2 : list = insert_at_beg(list); 
		break;

		case 3 : list = insert_at_end(list); 
		break; 

		case 4 : list = insert_at_pos(list); 
		break;

		case 5 : display(list);
		break;

		case 6 : exit(1); 
		break; 

		default: printf("Wrong choice\n");
	}
  }
}