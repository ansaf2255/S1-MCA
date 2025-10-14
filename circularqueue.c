#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};

struct node * head = NULL;

struct node * createnode(int n)
{
    struct node * newnode = (struct node *) malloc(sizeof(struct node));
    newnode->data=n;
    newnode->next=NULL;
    return newnode;
}