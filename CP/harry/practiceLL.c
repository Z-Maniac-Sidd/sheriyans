// #include<stdio.h>
// #include<stdlib.h>

// struct Node
// {
//     int data;
//     struct Node * next;
// };

// struct Node* Insertfirst( struct Node* head, int data)
// {
//     struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
//     ptr -> next = head;
//     ptr -> data = data;
//     head = ptr;
//     return ptr;
// };

// struct Node * Insertlast(struct Node * head, int data)
// {
//     struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr -> data = data;
//     struct Node* p = head;

//     while (p-> next != NULL)
//     {
//         /* code */
//         p = p->next;
//     }
//     p ->next = ptr;
//     ptr ->next = NULL;

//     return head;

// };

// void linkedlisttraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element: %d\n", ptr ->data);
//         ptr = ptr->next;
//     }
// }




// int main()
// {
//     struct Node * head;
//     struct Node * second;
//     struct Node * third;
//     struct Node * fourth;

//     head = (struct Node*)malloc(sizeof(struct Node));
//     second = (struct Node*)malloc(sizeof(struct Node));
//     third = (struct Node*)malloc(sizeof(struct Node));
//     fourth = (struct Node*)malloc(sizeof(struct Node));



//     head -> data = 1;
//     head ->next = second;

//     second -> data = 2;
//     second -> next = third;

//     third -> data = 3;
//     third -> next = fourth;

//     fourth -> data = 4;
//     fourth -> next = NULL;

//     linkedlisttraversal(head);
//     printf("****************************\n");
//     head = Insertfirst(head, 45);
//     linkedlisttraversal(head);
//     printf("****************************\n");
//     Insertlast(head,78);
//     linkedlisttraversal(head);
//     printf("****************************\n");
//     head = Insertfirst(head, 550);
//     linkedlisttraversal(head);
//     printf("****************************\n");
// }




#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node * next;
};

struct Node* Insertfirst(struct Node* head, int data)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> next = head;
    ptr -> data = data;
    head = ptr;
    return head;

};

void listtrasversal(struct Node* ptr)
{
    while(ptr != NULL)
    {
        printf("Element : %d\n", ptr -> data);
        ptr = ptr -> next;
    }
}

int main()
{
    struct Node* head;
    struct Node * second;
    struct Node* third;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head ->data = 1;
    head ->next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = NULL;

    listtrasversal(head);
    printf("****************************\n");

    Insertfirst(head, 45);
    printf("****************************\n");

}