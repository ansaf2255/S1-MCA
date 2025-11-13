#include<stdio.h>
#define MAX 10
int graph[MAX][MAX];
int visited[MAX];
int n,i,j;
int main(){
printf("Enter no of vertices: ");
scanf("%d", &n);
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        graph[i][j]=0;
    }
}
}