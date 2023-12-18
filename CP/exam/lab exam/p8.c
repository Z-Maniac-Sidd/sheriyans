#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Define the maximum size for the stack
#define MAX_SIZE 100

struct Stack{
    int top;
    int data[MAX_SIZE];
};

void iinitial(struct Stack* stack){
    stack->top = -1;
}

int isempty(struct Stack* stack){
   return stack->top == -1; 
}

int isfull(struct Stack* stack){
    return stack->top == MAX_SIZE-1;
}

void push(struct Stack* stack, int value){
    if (isfull(stack))
    {
        printf("DFGH");
        exit(EXIT_FAILURE);
    }
    stack->data[++stack->top] = value;
}

int pop(struct Stack* stack){
    if (isempty(stack))
    {
        printf("ERTYU");
        exit(EXIT_FAILURE);
    }
    return stack->data[stack->top--];
}