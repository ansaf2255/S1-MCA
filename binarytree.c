#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *right;
    struct node *left;
};

struct node* root=NULL;

struct node * createnode(int n)
{
    struct node *newnode=(struct node *) malloc(sizeof(struct node));
    newnode->data=n;
    newnode->right=NULL;
    newnode->left=NULL;
    return newnode;
}

void insert(int n)
{
    struct node *newnode=createnode(n);
    struct node *ptr=root;
    struct node *ptr1=root;
    if(root==NULL)
    {
        root=newnode;
    }
    else
    {
        while(ptr!=NULL)
        {  
            if (newnode->data < ptr->data)
            {
                ptr1=ptr;
                ptr=ptr->left;
            }
            else
            {
                ptr1=ptr;
                ptr=ptr->right;
            }
        }
        if(ptr==NULL)
        {
            if(ptr1->data > newnode->data)
            {
                ptr1->left=newnode;
            }
            else
            {
                ptr1->right=newnode;
            }
        }
           
    }
}

void delete(int n)
{

} 

void search(int n ,struct node * root)
{
    if (root==NULL)
    {
        printf("Empty");
    }
    else if(n>root->data,root->right)
    {
        search(n,root->right);

    }   


}

void preorder(struct node *root)
{
     if (root != NULL) 
    {
        printf("%d ", root->data);  
        preorder(root->left);       
        preorder(root->right);      
    }


void postorder(struct node *root)
{
     if (root != NULL) 
    {
      
       postorder(root->left);       
       postorder(root->right); 
        printf("%d ", root->data);       
    }
}

void inorder(struct node *root)
{
     if (root != NULL) 
    {
      
       inorder(root->left);
         printf("%d ", root->data);          
       inorder(root->right); 
          
    }
}

int main()
{
    insert(50);
    insert(30);
    insert(70);
    insert(20);
    insert(40);
    insert(60);
    insert(80);
    preorder(root);
}


