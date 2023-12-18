#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};


struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

void inOrderTraversal(struct Node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

void preOrderTraversal(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}


void postOrderTraversal(struct Node* root) {
    if (root != NULL) {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d ", root->data);
    }
}
int main() {
    struct Node* root = NULL;
    int data;
    

    root = insert(root, 7);
    root = insert(root, 15);
    root = insert(root, 4);
    root = insert(root, 2);
    root = insert(root, 91);
    root = insert(root, 74);
    root = insert(root, 80);
    root = insert(root, 65);
    root = insert(root, 45);
    root = insert(root, 32);
    root = insert(root, 38);
    root = insert(root, 20);
    

    printf("In-order traversal of the BST: ");
    inOrderTraversal(root);
    
     printf("\npre-order traversal of the BST: ");
    preOrderTraversal(root);
    
     printf("\npost-order traversal of the BST: ");
    postOrderTraversal(root);
    return 0;
}