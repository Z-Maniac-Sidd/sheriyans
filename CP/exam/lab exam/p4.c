// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node* next;
// };

// struct Node* insertbeginning(struct Node* head, int newdata){
//     struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
//     if (newNode == NULL)
//     {
//         printf("Invalid\n");
//         exit(1);
//     }
//     newNode ->data = newdata;
//     newNode ->next = head;

//     head = newNode;

//     return head;
// }

// void display(struct Node* head){
//     struct Node* current = head;

//     while (current != NULL)
//     {
//         /* code */
//         printf("%d ->", current ->data);
//         current = current->next;
//     }
    
//     printf("NULL\n");
// }

// int main(){
//     struct Node* head = NULL;
//     head = insertbeginning(head, 3);
//     head = insertbeginning(head, 5);
//     head = insertbeginning(head, 7);
    
//     printf("linked list:");
//     display(head);
// }


// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node* next;
// };

// struct Node* insertatbeginning(struct Node* head, int element){
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

//     if (newNode == NULL)
//     {
//         /* code */
//         printf("Invalid");
//         exit(1);
//     }
    
//     newNode->data = element;
//     newNode->next = head;

//     head = newNode;
// }

// void display(struct Node* head){
//     struct Node* current= head;

//     while(current != NULL)
//     {
//         printf("%d ->", current->data);
//         current = current->next;
//     }
//     printf("\n");
// }



#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
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
    newnode->next = head;

    head = newnode;

    return head;
}

void display(struct Node* head){
    struct Node* current = head;

    while (current != NULL)
    {
        printf("%d ->", current->data);
        current = current ->next;
    }
    printf("NULL");
}
int main() {
    // Initialize an empty linked list
    struct Node* head = NULL;

    // Insert some data at the beginning of the linked list
    head = insert(head, 3);
    head = insert(head, 7);
    head = insert(head, 1);

    // Display the linked list
    printf("Linked List: ");
    display(head);

    return 0;
}
