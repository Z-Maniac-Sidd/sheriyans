#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>


// Define a structure for the stack
struct Stack {
    int top;
    int capacity;
    char* array;
};

// Function to initialize an empty stack
void initialize(struct Stack* stack, int capacity) {
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (char*)malloc(stack->capacity * sizeof(char));
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
int isFull(struct Stack* stack) {
    return stack->top == stack->capacity - 1;
}

// Function to push a character onto the stack
void push(struct Stack* stack, char value) {
    if (isFull(stack)) {
        printf("Stack Overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->array[++stack->top] = value;
}

// Function to pop a character from the stack
char pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack->array[stack->top--];
}

// Function to get the precedence of an operator
int getPrecedence(char operator) {
    if (operator == '+' || operator == '-')
        return 1;
    else if (operator == '*' || operator == '/')
        return 2;
    else
        return 0; // for '('
}

// Function to convert infix expression to postfix
void infixToPostfix(char* infixExpression) {
    struct Stack stack;
    initialize(&stack, strlen(infixExpression));
    
    printf("Postfix Expression: ");
    
    for (int i = 0; infixExpression[i] != '\0'; i++) {
        if (isalnum(infixExpression[i])) {
            printf("%c", infixExpression[i]);
        } else if (infixExpression[i] == '(') {
            push(&stack, infixExpression[i]);
        } else if (infixExpression[i] == ')') {
            while (!isEmpty(&stack) && stack.array[stack.top] != '(') {
                printf("%c", pop(&stack));
            }
            pop(&stack); // Pop '('
        } else {
            // Operator
            while (!isEmpty(&stack) && getPrecedence(stack.array[stack.top]) >= getPrecedence(infixExpression[i])) {
                printf("%c", pop(&stack));
            }
            push(&stack, infixExpression[i]);
        }
    }
    
    // Pop remaining operators from the stack
    while (!isEmpty(&stack)) {
        printf("%c", pop(&stack));
    }

    printf("\n");
}

int main() {
    char infixExpression[] = "a+b*(c-d)/e";
    
    printf("Infix Expression: %s\n", infixExpression);
    
    infixToPostfix(infixExpression);

    return 0;
}
