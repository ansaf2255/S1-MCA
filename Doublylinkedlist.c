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

void insertatmiddle(int n)
{
    int i,pos;
    struct node *newnode=createnode(n);
    struct node *ptr=head;
    printf("Enter the position: ");
    scanf("%d",&pos);
    for(i=1;i<pos;i++)
    {
        ptr=ptr->next;
    }
    newnode->next=ptr->next;
    ptr->next=newnode;
    newnode->prev=ptr;
    newnode->next->prev=newnode;   
}

void deleteatbegin()
{
    struct node * ptr = head;
    printf("deleted element is %d\n", ptr->data);
    head = ptr->next;
}

void deleteatend()
{
    struct node * ptr = head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    } 
    printf("deleted element at end is %d \n",ptr->data);
    ptr->prev->next=NULL;
    free(ptr);
}

void deleteatmiddle()
{
    struct node * ptr=head;
    int i,pos;
    printf("Enter the position to delete: \n");
    scanf("%d",&pos);
    for(i=1;i<pos;i++)
    {
        ptr=ptr->next;
    } 
    printf("Deleted element is %d \n",ptr->data);
    ptr->prev->next=ptr->next;
    ptr->next->prev=ptr->prev;
    free(ptr);
}

void search()
{

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
    insertatbegin(10);
    insertatbegin(70);
    insertatbegin(60);
    insertatend(20);
    insertatmiddle(80);
    deleteatbegin();
    deleteatend();
    display();
    deleteatmiddle();
    display();
}