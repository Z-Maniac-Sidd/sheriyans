#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* create(int data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
};

void preorder(struct node* root){
if(root != NULL){   
    printf("%d", root->data);
    preorder(root->left);
    preorder(root->right);
    }
}

void postorder(struct node* root){
if(root != NULL){   
    postorder(root->left);
    postrder(root->right);
    printf("%d", root->data);
    }
}

void inorder(struct node* root){
if(root != NULL){   
    inorder(root->left);
    printf("%d", root->data);
    inorder(root->right);
    }
}

int bst(struct node* root){
    static struct node* prev = NULL;
    if (root != NULL)
    {
        if (!bst(root->left))
        {
            return 0;
        }
        if (prev!= NULL && root->data<=prev->data)
        {
            return 0;
        }
        prev = root;
        return bst(root->right);
        
        
    }
    
}