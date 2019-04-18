#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
int data;
struct node *next;
struct node *prev;
}NODE;


int is_empty(NODE *list);
NODE *create(NODE *list);
NODE *insert_at_beg(NODE *list);
NODE *insert_at_end(NODE *list);
NODE *insert_at_pos(NODE *list);
NODE *delete_at_beg(NODE *list);
NODE *delete_at_end(NODE *list);
NODE *delete_at_pos(NODE *list);
void display(NODE *list);



int main()
{
	NODE *start=NULL;
	int choice;
	while(1)
	{
		printf("\n Enter your choice\n");
		printf("1.Insertion at the beginning\n");
		printf("2.Insertion at end\n");
		printf("3.Insertion at particular position\n");
		printf("4.Deletion at the beginning\n");
		printf("5.Deletion at the end\n");
		printf("6.Deletion at particular position\n");
		printf("7.Display\n");
		printf("8.Exit\n");
	scanf("%d",&choice);
switch(choice)
	{
		case 1:
				start=insert_at_beg(start);
				display(start);
		break;
		case 2:
				start=insert_at_end(start);
				display(start);
		break;
		case 3:
				start=insert_at_pos(start);
				display(start);
		break;
		case 4:
				start=delete_at_beg(start);
				display(start);
		break;
		case 5:
				start=delete_at_end(start);
				display(start);
		break;
		case 6:
				start=delete_at_pos(start);
				display(start);
		break;
		case 7:
				display(start);
		break;
		case 8:
				exit(0);
		default:
				printf("Wrong choice!!");
			}
}
return 0;
}



int is_empty(NODE *list)
{
if(list==NULL)
{
return 1;
}
return 0;
}


NODE *create(NODE *list)
{
	NODE *temp;
	temp=(NODE *)malloc(sizeof(NODE));
	temp->next=NULL;
	return temp;
}
	
NODE *insert_at_beg(NODE *list)
{
	NODE *temp;
	temp=create(list);
	int element;
	printf("Enter the element at the beginning : ");
	scanf("%d",&element);
	temp->data=element;
	temp->next=list;
	temp->prev=NULL;
	if(list!=NULL)
	list->prev=temp;
	list=temp;
	return list;
}


NODE *insert_at_end(NODE *list)
{
	NODE *temp,*start;
	temp=create(list);
	int element;
	printf("Enter the element at the beginning : ");
	scanf("%d",&element);
	temp->data=element;
	temp->next=NULL;
	if(is_empty(list))
	{
	list->prev=NULL;
	list=temp;
	}
	else
	{
	start=list;
	while(start->next!=NULL)
	{
	start=start->next;
	}
	start->next=temp;
	temp->prev=start;
	}
	return list;
}


NODE *insert_at_pos(NODE *list)
{
	NODE *temp,*prev,*new_node;
	new_node=create(list);
	int element,position,count=0;
	printf("Enter the element at the beginning : \n");
	scanf("%d",&element);
	printf("Enter the position : ");
	scanf("%d",&position);
	new_node->data=element;
	if(is_empty(list))
	{
	list=new_node;
	}
	else
	{
	temp=list;
	prev=NULL;
	while(temp->next!=NULL)
	{
	prev=temp;
	temp=temp->next;
	count++;
	if(count==position)
	{
	break;
	}
	}
	prev->next=new_node;
	new_node->next=temp;
}
return list;
}


NODE *delete_at_beg(NODE *list)
{
 if(!(is_empty(list)))
 {
		 NODE *temp;
		 temp=list;
		 list=list->next;
		 free(temp);
 }
 return list;
}


NODE *delete_at_end(NODE *list)
{
 if(!(is_empty(list)))
 {
		 NODE *start,*last;
		 start=list;
		 last=list;
		 while(start->next!=NULL)
		 {
				 last=start;
				 start=start->next;
		 }
		 if(start==last)
		 {
				 list=NULL;
		 }
		 else
		 {
				 last->next=NULL;
		 }
		 free(start);
 }
 return list;
}


NODE *delete_at_pos(NODE *list)
{
		 NODE *temp,*prev,*del;
		 temp=list;
		 prev=NULL;
		 int count=0,position;
		 printf("Enter the previous position of which you want to delete : ");
		 scanf("%d",&position);
		 while(temp->next!=NULL)
		 {
				 prev=temp;
				 temp=temp->next;
				 if(position==count)
				 {
						 break;
				 }
				 count++;
		 }
	 //  list=list->next;
 del=temp;
 temp=temp->next;
 prev->next=temp;
		 free(del);
 return list;
}


void display(NODE *list)
{
		if(is_empty(list))
		{
				printf("List is empty");
		}
		else
		{
				printf("list:\t");
				NODE *start;
				start=list;
				while(start!=NULL)
				{
						printf("%d\t",start->data);
						start=start->next;
				}
				printf("\n");
		}
}