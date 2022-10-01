#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


int main()
{
    /* Initialize nodes */
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    /* Allocate memory */
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    /*Assign the value of the pointers*/
    one->data = 60;
    two->data = 34;
    three->data = 98;

    /*Connected the nodes*/
    one->next = two;
    two->next = three;
    three->next = NULL;


    head = one;

    //Print the results....
    printf("%d %d %d",one->data,two->data, three->data);
    return 0;
}

