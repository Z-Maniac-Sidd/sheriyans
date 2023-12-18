#include <stdio.h>
#include <stdlib.h>

// Structure for a doubly linked list node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at a given position
void insertNode(struct Node** head_ref, int position, int data) {
    struct Node* new_node = createNode(data);

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    if (position == 1) {
        new_node->next = *head_ref;
        (*head_ref)->prev = new_node;
        *head_ref = new_node;
        return;
    }

    struct Node* current = *head_ref;
    for (int i = 1; current != NULL && i < position - 1; i++)
        current = current->next;

    if (current == NULL)
        return;

    new_node->prev = current;
    new_node->next = current->next;
    if (current->next != NULL)
        current->next->prev = new_node;
    current->next = new_node;
}

// Function to print the doubly linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

// Main function
int main() {
    struct Node* head = NULL;
    
    // TODO: Add code to create and populate the doubly linked list

    int position, data;
    printf("Enter the position to insert the node: ");
    scanf("%d", &position);
    printf("Enter the data for the new node: ");
    scanf("%d", &data);

    insertNode(&head, position, data);
    printf("Doubly linked list after insertion: ");
    printList(head);

    return 0;
}