#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

struct Node* push(struct Node* start, int new_data)
{
    struct Node* new_node =(struct Node*)malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (start);
    start = new_node;
    return start;
}

int count(struct Node* head, int x)
{
    struct Node* current = head;
    int count = 0;
    while (current != NULL)
    {
        if (current->data >= x)
           count++;
        current = current->next;
    }
    return count;
}

int main()
{
    struct Node* head = NULL;
    head=push(head, 70);
    head=push(head, 80);
    head=push(head, 90);
    head=push(head, 60);
    head=push(head, 50);
    printf("Number of nodes whose info field >= 60 is %d", count(head, 60));
    return 0;
}
