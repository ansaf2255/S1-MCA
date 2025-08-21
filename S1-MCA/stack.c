#include<stdio.h>

int stack[5];
int top=-1;
int value;
void push(int value){
    if (top==5)
    {
        printf("Stack Overflow \n");
    }
    else{
        top++;
        stack[top]= value;
        printf("Pushed %d \n", value);
    }
}
void pop()
    {
    if (top==-1)
    {
        printf("Underflow \n");
    }
    else{
         value=stack[top];
        printf("Popped %d \n",value);
        top--;
    }
    }

void display(){
    if (top==-1)
    {
        printf("Stack is empty \n");
    }
    else{
        printf("The stack = \n");
        int i;
        for (i = top; i >=0; i--)
        {
            printf("%d \n",stack[i]);
        }
        
    }
}

    int main()
    {
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    display();
    return 0;
}
    

    

