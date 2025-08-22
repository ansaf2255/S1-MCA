#include <stdio.h>
#define max 5
int queue[max];
int f=-1, r=-1;
int value;
//int p;

void enqueue(int value)
{
    if(r==max-1)
    
{
    printf("queue full");
}
else if(f==-1&&r==-1)
{
    r=0;
    f=0;

    queue[r]=value;
    
}
else{
    r++;
     queue[r]=value;
}
}
void dequeue()
{
    if (f==-1)
    {
        printf("underflow");
    }
    else if(r==f)
    {
        printf("%d",queue[r]);
        f=-1;
        r=-1;
    }
    else
    {
        printf("%d",queue[f]);
        f++;
    }   
}
    void display()
    {
        int i;
        for(i=f;i<=r;i++)
        {
            printf("%d",queue[i]);
        }
    }

int main()
{
    enqueue(2);
    enqueue(3);
    enqueue(7);
    enqueue(18);
    printf("popped:");
    dequeue();
    printf("\npopped:");
    dequeue();
    printf("\n");
    display();
   // dequeue(); 

    return 0;

}


