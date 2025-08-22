#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node* head=NULL;

struct node * createnode(int n){
    struct node *newnode=(struct node *) malloc(sizeof(struct node));
    newnode->data=n;
    newnode->next=NULL;
    return newnode;
}
void insertatbeginning(int n){
    struct node *newnode=createnode(n);
    newnode->next=head;
    head=newnode;
}
void insertatend(int n){
    struct node *tempnode=createnode(n);
    struct node *ptr=head;
    while(ptr!=NULL){
    ptr=ptr->next;
    ptr->next=tempnode;
    }
}
void display()
{
     struct node *ptr=head;
    while(ptr!=NULL){
     printf("%d",ptr->data);
    ptr=ptr->next;
   }

}











int main(){

insertatbeginning(5);
insertatbeginning(6);
insertatbeginning(7);
display();
return 0;
}
