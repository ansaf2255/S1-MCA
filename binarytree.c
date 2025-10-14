#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *right;
    struct node *left;
};

struct node* head=NULL;

struct node * createnode(int n)
{
    struct node *newnode=(struct node *) malloc(sizeof(struct node));
    newnode->data=n;
    newnode->right=NULL;
    newnode->left=NULL;
    return newnode;
}


