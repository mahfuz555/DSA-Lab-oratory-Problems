#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};


//Create newNode...
struct node* CreateNode(int value)
{
    struct node* newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
};

//In-order Traversal...
void inorderTraversal(struct node* root)
{
    if(root==NULL) return;
    inorderTraversal(root->left);
    printf("%d ",root->data);
    inorderTraversal(root->right);
}

//Insert a node...
struct node *insert(struct node *root, int data)
{
  // Return a new node if the tree is empty
  if (root == NULL)
    return CreateNode(data);

  // Traverse to the right place and insert the node
  if (data < root->data)
    root->left = insert(root->left, data);
  else
    root->right = insert(root->right, data);

  return root;
}

int main() {
  struct node *root = NULL;
  root = insert(root, 8);
  root = insert(root, 3);
  root = insert(root, 1);
  root = insert(root, 6);
  root = insert(root, 7);
  root = insert(root, 10);
  root = insert(root, 14);
  root = insert(root, 4);

  printf("Inorder traversal: ");
  inorderTraversal(root);
}

