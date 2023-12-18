#include <stdio.h>
#include <stdlib.h>

// Define a structure for a doubly linked list node
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

// Function to insert a new node at the end of the doubly linked list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

// Function to delete a node with a given key from the doubly linked list
void deleteNode(struct Node** head, int key) {
    struct Node* current = *head;

    // Find the node to be deleted
    while (current != NULL && current->data != key) {
        current = current->next;
    }

    // If the node with the key is not found
    if (current == NULL) {
        printf("Node with key %d not found\n", key);
        return;
    }

    // Update pointers to bypass the node to be deleted
    if (current->prev != NULL) {
        current->prev->next = current->next;
    } else {
        *head = current->next;
    }

    if (current->next != NULL) {
        current->next->prev = current->prev;
    }

    // Free the memory of the node to be deleted
    free(current);
}

// Function to print the doubly linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to free the memory allocated for the doubly linked list
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct Node* head = NULL;

    // Insert some nodes
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);

    // Print the initial doubly linked list
    printf("Doubly Linked List: ");
    printList(head);

    // Delete a node with key 2
    deleteNode(&head, 2);

    // Print the modified doubly linked list
    printf("Doubly Linked List after deletion: ");
    printList(head);

    // Free the memory allocated for the doubly linked list
    freeList(head);

    return 0;
}
