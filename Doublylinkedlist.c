#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

struct node * head=NULL;

struct node * createnode(int n)
{
    struct node * newnode=(struct node * )malloc(sizeof(struct node));
    newnode->prev=NULL;
    newnode->next=NULL;
    newnode->data=n;
    return newnode;
}

void insertatbegin(int n)
{
    struct node *newnode=createnode(n);
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
         newnode->next=head;
        head=newnode;    
        newnode->next->prev=newnode;
    }
   
}

void insertatend(int n)
{
    struct node *newnode=createnode(n);
    struct node * ptr=head;
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    newnode->prev=ptr;
    ptr->next=newnode;
    
}

void display()
{
    struct node * ptr=head;
    while(ptr!=NULL)
    {
        printf("%d \n", ptr->data );
        ptr=ptr->next;
    }
}

int main()
{
    insertatbegin(30);
    insertatbegin(40);
    insertatbegin(90);
    display();
}