#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *CreateNode(value)
{
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
};

struct node *insertLeft(struct node *root, int value)
{
    root->left = CreateNode(value);
    return root->left;
};

struct node *insertRight(struct node *root, int value)
{
    root->right = CreateNode(value);
    return root->right;
};

void inorderTraversal(struct node* root)
{
    if(root==NULL) return;
    inorderTraversal(root->left);
    printf("%d-->", root->data);
    inorderTraversal(root->right);
}
int main()
{
    system("CLS");
    struct node *root = CreateNode(1);
    insertLeft(root, 12);
    insertRight(root, 9);
    insertLeft(root->left, 5);
    insertRight(root->left, 6);

    printf("The Inorder Traversal is: ");
    inorderTraversal(root);

    return 0;
}