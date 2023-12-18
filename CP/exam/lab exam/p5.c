#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* insert(struct Node* head, int element){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));

    if (newnode == NULL)
    {
        printf("invlid");
        exit(1);
    }
    
    newnode ->data = element;
    newnode->next = head;

    head = newnode;

    return head;
}

// struct  Node* delete(struct Node* head, int key){
//     struct Node* current = head,  *prev = NULL;

//     if (current != NULL && current->data == key)
//     {
//         head = current->next;
//         free(current);
//         printf("Node with %d is released", key);
//         return head;
//     }
    
//     while (current != NULL && current->data != key)
//     {
//         prev = current;
//         current = current->next;
//     }

//     if (current == NULL)
//     {
//         printf("Invalid");
//         return head;
//     }

//     prev->next = current->next;
//     free(current);
//     printf("Node with %d value is freed", key);

//     return head;
       
// }


struct Node* delete(struct Node* head, int key)
{
    struct Node* currrent = head, *prev = NULL;

    if (currrent != NULL && currrent->data == key)
    {
        head = currrent->next;
        free(currrent);
        return head;
    }
    
    while (currrent != NULL && currrent->data != key)
    {
        prev = currrent;
        currrent = currrent->next;
    }

    if (currrent == NULL)
    {
        printf("Invalied");
        return head;
    }
        
    prev -> next = currrent->next;
    free(currrent);
    return head;
};


void display(struct Node* head){
    struct Node* current = head;

    while (current != NULL)
    {
        printf("%d ->", current->data);
        current = current->next;
    }
    printf("NULL");
    
}

int main() {
    struct Node* head = NULL;

    // Insert some data at the beginning of the linked list
    head = insert(head, 3);
    head = insert(head, 7);
    head = insert(head, 1);

    // Display the original linked list
    printf("Original Linked List: ");
    printf("\n");
    display(head);
    printf("\n");
    // Delete a node with a specific value (e.g., 7)
    head = delete(head, 7);
    
    // Display the modified linked list
    printf("Modified Linked List: ");
    printf("\n");
    display(head);

    return 0;
}
