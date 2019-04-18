#include<stdio.h>
#include<stdlib.h>
 
struct Node
{
    int data;
    struct Node* next;
};
 
struct Node *newNode(int data)
{
    struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
 
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = newNode(new_data);
    new_node->next = (*head_ref); 
    (*head_ref) = new_node;
}
 
struct Node* addTwoLists (struct Node* first, struct Node* second)
{
    struct Node* res = NULL; 
    struct Node *temp, *prev = NULL;
    int carry = 0, sum;
 
    while (first != NULL || second != NULL)
    {
        sum = carry + (first? first->data: 0) + (second? second->data: 0);
        carry = (sum >= 10)? 1 : 0;
        sum = sum % 10;
        temp = newNode(sum);
 
        if(res == NULL)
            res = temp;
        else 
        prev->next = temp;
        prev  = temp;
 
        if (first) first = first->next;
        if (second) second = second->next;
    }
 
    if (carry > 0)
      temp->next = newNode(carry);

    return res;
}
 
void printList(struct Node *node)
{
    while(node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
 
int main(void)
{
    struct Node* res = NULL;
    struct Node* first = NULL;
    struct Node* second = NULL;
 
    push(&first, 6);
    push(&first, 4);
    push(&first, 9);
    push(&first, 5);
    push(&first, 7);
    printf("First List is ");
    printList(first);
 
    push(&second, 4);
    push(&second, 1);
    push(&second, 2);
    push(&second, 3);
    push(&second, 4);
    printf("Second List is ");
    printList(second);
 
    res = addTwoLists(first, second);
    printf("Resultant list is ");
    printList(res);
 
   return 0;
}
