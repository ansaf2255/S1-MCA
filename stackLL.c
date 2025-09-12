#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};

struct node * head = NULL;

struct node *createnode(int n)
{
    
    struct node *newnode=(struct node *) malloc(sizeof(struct node));
    newnode->data=n;
    newnode->next=NULL;
    return newnode;

}

void push(int n)
{
    struct node *newnode=createnode(n);
    newnode->next=head;
    head=newnode;  
}

void pop()
{
    if(head==NULL)
    {
        printf("\nStack underflow");
    }
    else
    {
    struct node *ptr=head;
    printf("\nDeleted element is %d \n",ptr->data);
    head=ptr->next;
    }
}

void display()
{
    if(head==NULL)
    {
        printf("\nStack underflow");
    }
    else
    {
        struct node *ptr=head;
        while(ptr!=NULL)
        {
        printf("%d \n",ptr->data);
        ptr=ptr->next;
        }
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(60);
    pop();
    pop();
    display();
}

