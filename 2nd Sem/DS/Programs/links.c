#include <stdio.h>

struct node
{
    int info;
    struct node* next;
};

/*
    init the stack
*/
void init(struct node* start)
{
    start = NULL;
}
/*
    push an element into stack
*/
struct node* push(struct node* start, int data)
{
    struct node* tmp = (struct node*) malloc(sizeof(struct node));
    if(tmp == NULL)
    {
        exit(0);
    }
    tmp->info = data;
    tmp->next = start;
    start = tmp;
    return start;
}
/*
    pop an element from the stack
*/
struct node* pop(struct node *start,int *element)
{
    struct node* tmp = start;
    *element = start->info;
    start = start->next;
    free(tmp);
    return start;
}
/*
    returns 1 if the stack is empty, otherwise returns 0
*/
int empty(struct node* start)
{
    return start == NULL ? 1 : 0;
}
/*
    display the stack content
*/
void display(struct node* start)
{
    struct node *current;
    current = start;
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

int main()
{
    struct node* start = NULL;
    int size, element;
    int counter = 0;
    printf("Enter the number of stack elements:");
    scanf("%d",&size);
    printf("--- Push elements into the linked stack ---\n");
    init(start);
    while(counter < size)
    {
        printf("Enter a number to push into the stack:");
        scanf("%d",&element);
        start = push(start,element);
        display(start);
        counter++;
    }
    printf("--- Pop elements from the linked stack --- \n");
    while(empty(start) == 0)
    {
        start = pop(start,&element);
        printf("Pop %d from stack\n",element);
        display(start);
        counter--;
    }
    return 0;
}
