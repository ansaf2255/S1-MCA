#include<stdio.h>
#include<stdlib.h>

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

void enqueue(int n)
{
    struct node * new = createnode(n);
    if (head == NULL) 
    {
        head = new; 
    } 
    else 
    {
        struct node * ptr = head;
    
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=new;
    }
}

void dequeue()
{
    if(head==NULL)
    {
        printf("\n Queue Underflow \n" );
    }
    else
    {
        struct node * ptr=head;
        printf("\nDeleted element is %d\n", ptr->data);
        head = ptr->next;
        free(ptr);
    }
}

void display()
{
    if(head==NULL)
    {
        printf("\n Queue Underflow");
    }
    else
    {
        struct node * ptr = head;
        while (ptr!=NULL)
        {
            printf("%d \n",ptr->data);
            ptr = ptr->next;
        }    
    }
    
}

int main()
{
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    dequeue();
    display();
}
