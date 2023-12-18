#include <stdio.h>
#include <stdlib.h>
#include<math.h>


struct Node {
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};


int height(struct Node *node) {
    if (node == NULL)
        return 0;
    return node->height;
}


int getBalance(struct Node *node) {
    if (node == NULL)
        return 0;
    return height(node->left) - height(node->right);
}


struct Node *createNode(int key) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->key = key;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->height = 1; 
    return newNode;
}


struct Node *rightRotate(struct Node *y) {
    struct Node *x = y->left;
    struct Node *T2 = x->right;

    
    x->right = y;
    y->left = T2;

    
    y->height = 1 + fmax(height(y->left), height(y->right));
    x->height = 1 + fmax(height(x->left), height(x->right));

    return x;
}


struct Node *leftRotate(struct Node *x) {
    struct Node *y = x->right;
    struct Node *T2 = y->left;


    y->left = x;
    x->right = T2;


    x->height = 1 + fmax(height(x->left), height(x->right));
    y->height = 1 + fmax(height(y->left), height(y->right));

    return y;
}


struct Node *insert(struct Node *node, int key) {

    if (node == NULL)
        return createNode(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else
        return node; 

    
    node->height = 1 + fmax(height(node->left), height(node->right));

    
    int balance = getBalance(node);

    
    if (balance > 1) {
        if (key < node->left->key)
            return rightRotate(node);
        else {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }
    }

    if (balance < -1) {
        if (key > node->right->key)
            return leftRotate(node);
        else {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }
    }

    return node;
}


void inOrder(struct Node *node) {
    if (node != NULL) {
        inOrder(node->left);
        printf("%d ", node->key);
        inOrder(node->right);
    }
}

int main() {
    struct Node *root = NULL;
    int keys[] = {10, 20, 30, 40, 50, 25};
    int n = sizeof(keys) / sizeof(keys[0]);

    for (int i = 0; i < n; i++) {
        root = insert(root, keys[i]);
    }

    printf("In-order traversal of the AVL tree: ");
    inOrder(root);
    printf("\n");

    return 0;
}
