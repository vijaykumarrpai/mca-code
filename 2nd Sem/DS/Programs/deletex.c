#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node Node;

Node* getNode(int data)
{
    Node* temp;
    temp=(Node *)malloc(sizeof(Node));
    temp->data=data;
    temp->next=NULL;
    return temp;
}

void deleteGreaterNodes(Node** head_ref, int x)
{
    Node *temp = *head_ref, *prev;
    while (temp != NULL && temp->data > x)
    {
        *head_ref = temp->next;
        free(temp);
        temp = *head_ref;
    }
        while (temp != NULL && temp->data <= x)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
            return;
        prev->next = temp->next;
        free(temp);
        temp = prev->next;
}

void printList(Node* head)
{
    while (head)
    {
        printf("%d\t", head->data);
        head = head->next;
    }
}

int main()
{
    Node* head = getNode(80);
    head->next = getNode(40);
    head->next->next = getNode(50);
    head->next->next->next = getNode(90);
    head->next->next->next->next = getNode(60);
    head->next->next->next->next->next = getNode(20);

    int x = 70;

    printf( "Original List:");
    printList(head);

    deleteGreaterNodes(&head, x);

    printf( "\nModified List:");
    printList(head);

    return 0;
}
