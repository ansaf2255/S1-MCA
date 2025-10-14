#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* head=NULL;

struct node * createnode(int n)
{
    struct node *newnode=(struct node *) malloc(sizeof(struct node));
    newnode->data=n;
    newnode->next=NULL;
    return newnode;
}

void insertatbeginning(int n)

{
    if(head==NULL)
    {
        struct node *newnode=createnode(n);
        head=newnode;
        newnode->next=head;
    }
    else
    {
        struct node *newnode=createnode(n);
        // struct node *temp=head;
        struct node *ptr=head;
        while(ptr->next!=head)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
        newnode->next=head;
        head=newnode;
    }
}

void insertatend(int n)

{

    struct node* tempnode=createnode(n);
    if (head==NULL)
    {
        tempnode->next=tempnode;
        head=tempnode;
    }
    else
    {
        struct node* ptr=head;
        while(ptr->next!=head)
        {
            ptr=ptr->next;
        }
        ptr->next=tempnode;
        tempnode->next=head;
    }
}

void insertatmiddle(int n)

{
    int i,pos;
    struct node* newnode=createnode(n);
    struct node* ptr=head;
    printf("enter the position:");
    scanf("%d",&pos);
    for(i=1;i<pos;i++)
    {
       ptr=ptr->next;
    }
    newnode->next=ptr->next;
    ptr->next=newnode;
}

// void deleteatbegin()
// {
//     struct node * ptr = head;
//     printf("deleted element is %d\n", ptr->data);
//     head = ptr->next;
// }

// void deleteatend()
// {

// }

// void deleteatmiddle()
// {

// }

void display()

{
    struct node * ptr=head;

    do
    {
        printf("%d \n",ptr->data);
        ptr=ptr->next;
    }while(ptr != head);
}

int main()

{
    insertatbeginning(10);
    insertatbeginning(20);
    insertatbeginning(30);
    insertatbeginning(40);
    insertatend(50);
    display();
    // insertatmiddle(60);
    deleteatbegin();
    display();
}

