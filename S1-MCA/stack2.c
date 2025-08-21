#include <stdio.h>

int main()
{
int n, top=-1, value;
printf("1.Push  2.pop /n 3.display /n ");
scanf("%d",&n);

int stack[5];
switch(n)
{
case 1:
if (top==5)
{
    printf("Stack Overflow \n");
}
else
{
  printf("Enter the number to be pushed \n");
  scanf("%d", value);
  top++;
  stack[top] = value; 
}
    
    break;
    case 4:
    return 0;

default:
printf("invalid entry");
    break;

}
return 0;
}