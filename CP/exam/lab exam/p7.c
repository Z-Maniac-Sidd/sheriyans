#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* insert(struct Node* head, int element){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));

    if (newnode == NULL)
    {
        /* code */
        printf("Invalid");
        exit(1);
    }
    
    newnode->data = element;
    newnode->prev = NULL;
    newnode->next = head;

    if (head != NULL)
    {
        head ->prev = newnode;
    }
    
    head = newnode;

    return head;
}

struct Node* insertend(struct Node* head, int element){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));

    struct Node* last = head;

    newnode->data = element;
    newnode->next = NULL;

    if (head != NULL)
    {
        /* code */
        head = newnode;
        newnode->prev = NULL;
    }
    
    while (last ->next != NULL)
    {
        /* code */
        last = last->next;
    }
    
    last->next = newnode;
    newnode->prev = last;

    last = newnode;

    return;
    
}

void deletenode(struct Node* head, int key){
    struct Node* current = head;

    while (current!= NULL && current->data != key)
    {
        current = current->next;
    }
    
    if (current->prev = NULL)
    {
        current->prev->next = current->next;
    }
    
}
