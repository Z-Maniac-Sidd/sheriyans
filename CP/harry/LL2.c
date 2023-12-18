#include <stdio.h>
#include <stdlib.h>
 
struct Node
{
    int data;
    struct Node *next;
};

// ptr point to head node
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Insert at first

struct Node* insertAtFirst(struct Node* head, int data)
{
    /* data */
    struct Node* ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr -> next = head;
    ptr ->data = data;
    return ptr;
};


// Insert b/w
struct Node * insertAtIndex(struct Node * head, int data, int index)
{
    struct Node* ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;

    while (i != index-1)
    {
        /* code */
        p = p->next;
        i++;
    }
    ptr ->data = data;
    ptr -> next = p->next;
    p->next = ptr;
    return head;
};


//insert at end

struct Node * insertatend(struct Node*head, int data)
{
    /* data */
    struct Node*ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr -> data = data;
    struct Node *p = head;

    while(p-> next != NULL)
    {
        p = p -> next;
    }
    p -> next = ptr;
    ptr -> next = NULL;
    return head;

};

// insert after node
struct Node * insertafternode(struct Node*head, struct Node *prevNode, int data)
{
    /* data */
    struct Node*ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr -> data = data;
    ptr -> next = prevNode -> next;

    prevNode ->next = ptr;

    return head;
};


int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
 
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
 
    // Link first and second nodes
    head->data = 7;
    head->next = second;
 
    // Link second and third nodes
    second->data = 11;
    second->next = third;
 
    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;
 
    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;
 
    linkedListTraversal(head);
    printf("\n++++++++++++++++++++++\n");

    head = insertAtFirst(head, 56);
    linkedListTraversal(head);
    printf("\n++++++++++++++++++++++\n");

    head = insertAtIndex(head, 777, 4);
    linkedListTraversal(head);
    printf("\n++++++++++++++++++++++\n");

    head = insertatend(head, 99);
    linkedListTraversal(head);
    printf("\n++++++++++++++++++++++\n");
    
    head = insertafternode(head, second, 888);
    linkedListTraversal(head);
    printf("\n++++++++++++++++++++++\n");
    
    head = insertafternode(head, third, 888);
    linkedListTraversal(head);
    printf("\n++++++++++++++++++++++\n");
    
    return 0;
}
