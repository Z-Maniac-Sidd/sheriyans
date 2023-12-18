#include<stdio.h>
#include<stdlib.h>

struct node * create_ll(struct node * start)
{
    /* data */
    struct node * new_node, * ptr;
    int num;
    printf("\nEnter -1 to end");
    printf("\n Enter the data");
    scanf("%d", &num);
    while (num != -1)
    {
        /* code */
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;
        if (start == NULL)
        {
            /* code */
            new_node ->next = NULL;
            start = new_node;
        }
        
    }
    
};
