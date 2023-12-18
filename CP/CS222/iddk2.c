
#include <stdio.h>
#include <stdlib.h>
 

struct Node {
    int data;
    struct Node* next;
};
 
void insertAtFront(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
 
    new_node->data = new_data;
 
    new_node->next = (*head_ref);
 
    (*head_ref) = new_node;
}

void insertAtback(struct Node** end_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
 
    new_node->data = new_data;
 
    new_node->next = (*end_ref);
 
    (*end_ref) = new_node;
}
 

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
 

void printList(struct Node* node)
{
    while (node != NULL) {
        printf(" %d", node->data);
        node = node->next;
    }
    printf("\n");
}
 

int main()
{
    int k;
    printf("Enter size: ");
    scanf("%d", &k);
    int r;
    
    
    struct Node* head = NULL;
 
    for (int i = 0; i < k; i++)
    {
        /* code */
        scanf("%d", &r);
        push(&head, r);
    }
    
    printf("Created Linked list is: ");
    printList(head);
    
    int bc;
    printf("Enter new addition: ");
    scanf("%d", &bc);
    
    insertAtFront(&head, bc);
 
    printf("After inserting %d at front: ", bc);
    printList(head);

    return 0;
}