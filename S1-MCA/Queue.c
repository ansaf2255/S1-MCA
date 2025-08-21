#include <stdio.h>

int queue[5];
int f=-1, r=-1;
int value;
int p;

void enqueue(int value)
{
    if(r==5)
    
{
    printf("queue full");
}
else if(f==-1&r==-1)
{
    r++;
    f++;

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
        f=-1;
        r=-1;
    }
    else
    {
        printf("%d",queue[value]);
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
    enqueue(10);
    enqueue(2);
    enqueue(3);
    enqueue(7);
    dequeue();
    dequeue(); 
    dequeue(); 

    return 0;

}


