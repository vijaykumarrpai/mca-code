#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

struct node
{
  int info;
  struct node* next;
};

void init(struct node *list);
struct node* push(struct node* list, int info);
struct node* pop(struct node *list,int val);
int empty(struct node* list);
void display(struct node* list);

int main()
{
	struct node* list = NULL;
	int SIZE, val;
	int counter = 0;
	int choice;

	init(list);

while(1)
{
  printf("Enter the choice:\n");
  printf("1.Push\n");
  printf("2.Pop\n");
  printf("3.Display\n");
  printf("4.Exit\n");
  scanf("%d", &choice);
  printf("\n");

  switch (choice)
  {
    case 1:  push(list);
    break;

    case 2:  pop(list);
    break;

    case 3: display(list);
    break;

    case 4: exit(0);
    break;

    default: printf("Wrong choice");
    printf("\n");
  }
}
return 0;
}

void init(struct node *list)
{
	list = NULL;
}

struct node* push(struct node* list, int info)
{
  int val;
  struct node* temp;
  printf("Enter the values to be pushed\n");
  scanf("%d", &val);
  temp =(struct node *)malloc(sizeof(struct node));
  if(temp == NULL)
  {
  	exit(0);
  }
  temp->info = info;
  temp->next = list;
  list = temp;
  return list;
  }

struct node* pop(struct node *list,int val)
{
  struct node* temp = list;
  *val = list->info;
  list = list->next;
  free(temp);
  return list;
}

int empty(struct node* list)
{
    return list == NULL ? 1 : 0;
}

void display(struct node* list)
{
  struct node *current;
    current = list;
    if(current!= NULL)
    {
        printf("Stack: ");
        do
        {
            printf("%d ",current->info);
            current = current->next;
        }
        while (current!= NULL);
        printf("\n");
    }
    else
    {
        printf("The Stack is empty\n");
    }
 
}


