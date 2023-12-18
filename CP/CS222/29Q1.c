// Add a node at the begining of a linked list 
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*next;
    
};

void insertfront(struct Node**head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}