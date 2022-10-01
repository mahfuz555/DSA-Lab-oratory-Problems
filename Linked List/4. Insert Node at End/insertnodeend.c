#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void printLinkedlist(struct node *temp)
{
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    struct node* head;
    struct node* one = NULL;
    struct node* two = NULL;
    struct node* three = NULL;

    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    one->data = 10;
    two->data = 20;
    three->data = 39;

    //connected nodes..
    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;


    //Traversing every node by temp variables.....
    printf("Before Inserting a Node: ");
    printLinkedlist(head);


    //Insert a Node at the beginning.....
    struct node* newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = 8;
    newNode->next = NULL;

    //Traverse to goes end of the element...
    struct node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;


    //Print the result after insert a node....
    printf("\nAfter Inserting a node(at the end): ");
    printLinkedlist(head);
    return 0;

}
