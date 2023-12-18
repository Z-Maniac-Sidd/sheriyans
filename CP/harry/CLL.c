#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node* next;
};

// Insertion after Node in circular linked list 
struct Node* insertionafternode(struct Node* head, int data , struct Node* prevnode)
{
    struct Node* ptr= (struct Node*) malloc (sizeof(struct Node));
    struct Node*p= head;

    while(p != prevnode)
    {
        p = p->next;
    }

    if(p == prevnode)
    {
        ptr->next = p->next;
        p->next = ptr;
        ptr->data = data;

    }
    return head;
}


// Insertion at Last Node in circular linked list
struct Node *insertionatlastnode(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    if (p->next == head)
    {
        p->next = ptr;
        ptr->next = head;
        ptr->data = data;
    }
    return head;
}


// insertion at first Circular Linked list
struct Node * InsertatFirst(struct Node * head, int data)
{
    /* data */
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> data = data;

    struct Node*p = head->next;

    while (p->next != head)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
};

void linkedListTraversal(struct Node *head){
    struct Node *ptr = head;
    do{
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
}



int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head ->data = 7;
    head ->next = second;

    second -> data = 11;
    second ->next = third;

    third -> data = 6;
    third ->next = fourth;

    fourth -> data = 1;
    fourth -> next = head;

    linkedListTraversal(head);
    printf("*******************\n");
    InsertatFirst(head, 45);
   
    linkedListTraversal(head);
    printf("*******************\n");
    return 0;
}