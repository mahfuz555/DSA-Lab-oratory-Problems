#include <stdio.h>
#include <stdlib.h>  //declare for clear screen statement..
#include <stdbool.h> //declare for bool data type

// Initialize for data, left and right pointer...
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// Create Node and allocte dynamic memory location
struct node *CreateNode(value)
{
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
};

// insert data value on left node....
struct node *insertLeft(struct node *root, int value)
{
    root->left = CreateNode(value);
    return root->left;
};

// insert data value on right node....
struct node *insertRight(struct node *root, int value)
{
    root->right = CreateNode(value);
    return root->right;
};

// Tree traversing for print tree element
void inorderTraversal(struct node *root)
{
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    printf("%d-->", root->data);
    inorderTraversal(root->right);
}

// Condition for checking binary Tree....
bool isFullBinaryTree(struct node *root)
{
    if (root == NULL)
        return true;
    if (root->left == NULL && root->right == NULL)
        return true;
    if ((root->left) && (root->right))
        return (isFullBinaryTree(root->left) && isFullBinaryTree(root->right));
    return false;
}
int main()
{
    // Take the value.......of this trees....
    struct node *root = CreateNode(1);
    insertLeft(root, 2);
    insertRight(root, 3);
    insertLeft(root->left, 4);
    insertRight(root->left, 5);
    insertLeft(root->left->right, 6);
    insertRight(root->left->right, 7);
    // print the tree elements....
    printf("The Inorder Traversal is: ");
    inorderTraversal(root);

    if (isFullBinaryTree(root))
        printf("\nThis is a full binary tree....");
    else
        printf("\nThis is not a full binary tree...");

    return 0;
}
