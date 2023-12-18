#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the doubly linked list
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to insert a new node at the beginning of the doubly linked list
struct Node* insertAtBeginning(struct Node* head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    newNode->data = newData;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
        head->prev = newNode;

    head = newNode;

    return head;
}

// Function to display the doubly linked list in forward direction
void displayForward(struct Node* head) {
    struct Node* current = head;

    while (current != NULL) {
        printf("%d <-> ", current->data);
        current = current->next;
    }

    printf("NULL\n");
}

// Function to display the doubly linked list in reverse direction
void displayBackward(struct Node* tail) {
    struct Node* current = tail;

    while (current != NULL) {
        printf("%d <-> ", current->data);
        current = current->prev;
    }

    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    // Insert some data at the beginning of the doubly linked list
    head = insertAtBeginning(head, 3);
    head = insertAtBeginning(head, 7);
    head = insertAtBeginning(head, 1);

    // Display the doubly linked list in forward and reverse directions
    printf("Doubly Linked List (Forward): ");
    displayForward(head);

    printf("Doubly Linked List (Backward): ");
    displayBackward(head);

    return 0;
}
