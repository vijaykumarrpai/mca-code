#include<stdio.h> 
#include<stdlib.h>
#define MAX 5
struct node
{
   int data;
   struct node *link;
 };
 int st_count(struct node * s)  // count number of elements 
 {
    int count = 0;
    struct node *temp;
    temp = s;
    while(temp != NULL) 
      { temp = temp->link;
       count++;
       }
      return count;
   }
  int empty(struct node * s) // to check if stack is empty
  {
    if (s == NULL)
   	  return 1;
   return 0;
  }
 
 
struct node * push(struct node * s) //to insert elements in stack
 {
   int val;
  struct node *temp;
  temp = (struct node*) malloc(sizeof(struct node));
  printf("\n enter value which you want to push into the stack :\n");
   scanf("%d", &val);
  temp->data = val;
  temp ->link = s;
  s = temp; 
  return s;
 }
 struct node * pop(struct node * s) //to delete elements from stack
 {
   struct node * temp;
   int x;
   if(empty(s))
    printf("** stack is empty**\n");
   else
      {
        temp = s;
        // x = temp->data;
        printf("value popped out is %d \n", temp->data);
       s = s->link;
        free(temp);
   }
   return s;
 }
void display(struct node * s) //to display the number of elements
{
 if(empty(s))
	printf("stack is empty\n");
 else
  {
   	struct node *temp;
  	temp = s;
        printf ("contents of the Stack are:\n");
	while(temp != NULL)
	{
		printf("%d\n",temp->data);
		temp = temp->link;
	}
   }
 return;
}

 void print_top(struct node * s) //to print top element of stack
{
	if(empty(s))
		printf("\n**TOP is not available for an EMPTY stack**\n");
	else
		printf("\nTop of stack is %d\n",s->data);
    return;
}

int main(void)
{
	struct node * top = NULL;
        int choice,res,ele;
	while(1)
	{
	printf("1. push an element\n 2. pop an element \n 3. stack empty \n 4. display elements present in stack\n 5. print top of stack \n 6. count the number of elements in stack \n 7. exit \n enter your choice\n");
			scanf("%d", &choice);
                 switch(choice)
                   {
			case 1: top = push(top);
                                display(top);
			            break;
			case 2: top = pop(top);
                                display(top);
                               // printf("value popped out is %d \n",ele);
     			           break;
			case 3: res=empty(top);
			         if(res)   printf("stack is empty\n");
			          else       printf("stack is not empty\n");
			                      break;
			case 4 : display(top);
			              break;
			case 5 : print_top(top);
                                  display(top);
			           break;
			case 6 : res=st_count(top);
			           if(!res)  printf("stack is empty\n");
			           else       printf("stack contains %d number of elements\n", res);
                                  display(top);
				break;
			case 7 : return 0;
			default : printf("invalid choice\n");
		}
	}
}


