#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createtree(int data){
    struct node* n;
    n = (struct node*)malloc(sizeof(struct node));

    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preorder(struct node* root){
    if (root != NULL)
    {
        printf("%d", root->data);
        preorder(root->left);
        preorder(root->right);
    }   
}

void postorder(struct node* root){
    if (root!= NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d", root->data);
    }
    
}

void inorder(struct node* root){
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d", root->data);
        inorder(root->right);
    }
    
}