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
    struct node *newnode=createnode(n);
    newnode->next=head;
    head=newnode;
}

void insertatend(int n)
{
    struct node* tempnode=createnode(n);
    struct node* ptr=head;
    while(ptr->next!=NULL)
    {
    ptr=ptr->next;
    }
    ptr->next=tempnode;  
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

    void deleteatbeginning()
{
    struct node *ptr=head;
    printf("\ndeleted element is %d \n",ptr->data);
    head=ptr->next;

}
void deleteatend()
{
    struct node* ptr=head;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    printf("\ndeleted element is %d \n",ptr->next->data);
    ptr->next=NULL;
}
void deleteatmiddle()
{
    int pos,i;
    struct node* ptr=head;
    printf("\nposition:");
    scanf("%d",&pos);
    for(i=1;i<pos-1;i++)
    {
        ptr=ptr->next;
    }
    printf("\ndeleted element is %d \n",ptr->next->data);
    struct node* ptr1=ptr->next->next;
    // for(i=1;i<=pos;i++)
    // {
    //     ptr1=ptr1->next;
    // }
    ptr->next=ptr1;
}



void display()
{
     struct node *ptr=head;
    while(ptr!=NULL)
    {
     printf("%d \n",ptr->data);
    ptr=ptr->next;
    }
}



int main(){
    // insertatbeginning(11);
    // insertatbeginning(22);
    // insertatbeginning(33);
    // insertatend(44);
    // insertatmiddle(55);
    // deleteatbeginning();
    // deleteatend();
    // deleteatmiddle(); printf("\n");
    // display();


   int n, ch;
    printf("1. Insert at beginning \n 2. Insert at end \n 3.Insert at middle \n 4.Display \n 5.Delete at beginning\n 6.Delete at end\n 7.Delete at middle\n");
    do
    {
        printf("enter the choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter the number you want to insert \n");
            scanf("%d",&n);
            insertatbeginning(n);
            break;
        case 2:
            printf("Enter the number you want to insert \n");
            scanf("%d",&n);
            insertatend(n);
            break;
        case 3:
            printf("Enter the number you want to insert \n");
            scanf("%d",&n);
            insertatmiddle(n);
            break;
        case 4:
            display();
            break;
        case 5:
            deleteatbeginning();
            break;
        case 6:
            deleteatend();
            break;
        case 7:
            deleteatmiddle();
            break;
        default:
        printf("Invalid");
      break;
    }
    } while (ch<8);
    
return 0;
}
