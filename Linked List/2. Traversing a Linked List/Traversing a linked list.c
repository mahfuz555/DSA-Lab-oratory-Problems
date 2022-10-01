#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

int main()
{
    struct node* head;
    struct node* one = NULL;
    struct node* two = NULL;
    struct node* three = NULL;

    //Memory allocate for the pointer variables
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    //Assign the data of the pointer variables
    one->data = 10;
    two->data = 20;
    three->data = 39;

    //Connected Node to each others
    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;


    //Traversing every node by temp variables.....
    struct node* temp = head;  //assign temp into the head
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
