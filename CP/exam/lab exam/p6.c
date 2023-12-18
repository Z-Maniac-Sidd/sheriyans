// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node* prev;
//     struct Node* next;
// };

// struct Node* insert(struct Node* head, int element){
//     struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));

//     if (newnode == NULL)
//     {
//         printf("Invalid");
//         exit(1);
//     }

//     newnode->data = element;
//     newnode->prev = NULL;
//     newnode->next = head;
    

//     if (head != NULL)
//         head->prev = newnode;
    
//     head = newnode;
//     return head;
    
// }

// void displayforward(struct Node* head){
//     struct Node* current = head;

//     while (current != NULL)
//     {
//         printf("%d <->", current->data);
//         current = current->next;
//     }
//     printf("NULL");
// }

// void displaybackward(struct Node* tail){
//     struct Node* current = tail;

//     while (current != NULL)
//     {
//         printf("%d <->", current ->data);
//         current = current->prev;
//     }
//     printf("NULL");
// }

// int main() {
//     struct Node* head = NULL;

//     // Insert some data at the beginning of the doubly linked list
//     head = insert(head, 3);
//     head = insert(head, 7);
//     head = insert(head, 1);

//     // Display the doubly linked list in forward and reverse directions
//     printf("Doubly Linked List (Forward): ");
//     displayforward(head);

//     printf("Doubly Linked List (Backward): ");
//     displaybackward(head);

//     return 0;
// }




#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node*insert(struct Node* head, int element){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));

    if (newnode==NULL)
    {
        printf("Invalid");
        exit(1);
    }

    newnode->data = element;
    newnode->prev = NULL;
    newnode->next = head;
    
    if (head != NULL)
    {
        head->prev = newnode;
    }
    
    return head;
    
}

void display(struct Node* head){
    struct Node* current = head;

    while (current != NULL)
    {
        printf("%d ->", current->data);
        current = current->next;
    }
    printf("Null");
}