#include <stdio.h>
#include <stdlib.h> //For clear screen.....
#include <stdbool.h>

// Initialize for Root node, left and right pointer......
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// Create new node for keeping data.....
struct node *CreateNode(int value)
{
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void insertLeft(struct node *root, int value)
{
    root->left = CreateNode(value);
    return root->left;
}

void insertRight(struct node *root, int value)
{
    root->right = CreateNode(value);
    return root->right;
}

void inorderTraversing(struct node *root)
{
    if (root == NULL)
        return;
    inorderTraversing(root->left);
    printf("%d  ", root->data);
    inorderTraversing(root->right);
}

// Calulate the depth of the tree....
int depth(struct node *root)
{
    int d = 0;
    while (root != NULL)
    {
        d++;
        root = root->left;
    }
    return d;
    printf("\nThe depth of the tree is: %d", d);
}



// Check if the tree is perfect
bool is_perfect(struct node *root, int d, int level) {
    // Check if the tree is empty
  if (root == NULL)
    return true;

  // Check the presence of children
  if (root->left == NULL && root->right == NULL)
    return (d == level + 1);

  if (root->left == NULL || root->right == NULL)
    return false;

  return is_perfect(root->left, d, level + 1) &&
       is_perfect(root->right, d, level + 1);
}
// Wrapper function
bool is_Perfect(struct node *root) {
  int d = depth(root);
  return is_perfect(root, d, 0);
}

int main()
{
    // Take the value for tree....
    struct node *root = CreateNode(1);
    insertLeft(root, 2);
    insertRight(root, 3);
//    insertLeft(root->left, 4);
//    insertRight(root->left, 5);
//    insertLeft(root->right, 6);
//    insertRight(root->right, 7);

    // Print the tree value return....
    printf("Inorder Traversal: ");
    inorderTraversing(root);

    // Print the result perfect or not...
    if (is_Perfect(root))
        printf("\nThis is a perfect binary Tree");
    else
        printf("\nThis is not a perfect binary Tree..");

    return 0;
}
