#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the beginning of the linked list
struct Node* insertAtBeginning(struct Node* head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    newNode->data = newData;
    newNode->next = head;
    head = newNode;

    return head;
}

// Function to delete a node with a specific value from the linked list
struct Node* deleteNode(struct Node* head, int key) {
    struct Node *current = head, *prev = NULL;

    // Check if the node to be deleted is the first node
    if (current != NULL && current->data == key) {
        head = current->next;
        free(current);
        printf("Node with value %d deleted\n", key);
        return head;
    }

    // Search for the node to be deleted
    while (current != NULL && current->data != key) {
        prev = current;
        current = current->next;
    }

    // If the node with the given value is not present
    if (current == NULL) {
        printf("Node with value %d not found\n", key);
        return head;
    }

    // Unlink the node from the linked list
    prev->next = current->next;
    free(current);
    printf("Node with value %d deleted\n", key);

    return head;
}

// Function to display the linked list
void displayList(struct Node* head) {
    struct Node* current = head;

    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    // Insert some data at the beginning of the linked list
    head = insertAtBeginning(head, 3);
    head = insertAtBeginning(head, 7);
    head = insertAtBeginning(head, 1);

    // Display the original linked list
    printf("Original Linked List: ");
    displayList(head);

    // Delete a node with a specific value (e.g., 7)
    head = deleteNode(head, 7);

    // Display the modified linked lists
    printf("Modified Linked List: ");
    displayList(head);

    return 0;
}
