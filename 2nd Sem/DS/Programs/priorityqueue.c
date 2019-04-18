#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct Node
{
    int data;
    int priority;
    struct Node *next;
};

int is_empty(struct Node *list);
struct Node *createNode(struct Node *list);
struct Node *push(struct Node *list);
struct Node *pop(struct Node *list);
void display(struct Node *list);

int main()
{
    struct Node *list;
    list = NULL;

    int choice;

    while (1)
    {
        printf("Enter the operation to be performed\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            list = push(list);
            display(list);
            break;
        case 2:
            list = pop(list);
            display(list);
            break;
        case 3:
            display(list);
            break;
        default:
            printf("Invalid option, try again..\n");
        }
    }
}

int is_empty(struct Node *list)
{
    if (list == NULL)
    {
        return 1;
    }
    return 0;
}

struct Node *createNode(struct Node *list)
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->next = NULL;
    return temp;
}

struct Node *push(struct Node *list)
{
    struct Node *temp, *start;
    temp = createNode(list);

    int element, priority;

    printf("Enter the element to be pushed: ");
    scanf("%d", &element);
    printf("Enter the element's priority: ");
    scanf("%d", &priority);

    temp->data = element;
    temp->priority = priority;
    temp->next = NULL;

    if (is_empty(list))
    {
        list = temp;
    }
    else if ((list->priority) > priority)
    {
        temp->next = list;
        list = temp;
    }
    else
    {
        start = list;

        while (start->next != NULL && (start->next->priority < priority))
        {
            start = start->next;
        }

        temp->next = start->next;
        start->next = temp;
    }

    return list;
}

struct Node *pop(struct Node *list)
{
    if (!(is_empty(list)))
    {
        struct Node *temp;
        temp = list;
        list = list->next;
        free(temp);
    }
    return list;
}

void display(struct Node *list)
{
    if (is_empty(list))
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue: ");

        struct Node *start;
        start = list;

        while (start != NULL)
        {
            printf("%d ", start->data);
            start = start->next;
        }

        printf("\n");
    }
}