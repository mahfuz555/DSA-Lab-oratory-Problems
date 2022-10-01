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
    int position = 3,i;
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


    //Delete from the end...
    struct node* temp = head;
    while(temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;


    //Print the result after insert a node....
    printf("\nAfter Deleting a node at the end: ");
    printLinkedlist(head);

}
