#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int graph[MAX][MAX];
int visited[MAX];
int queue[MAX];
int f=0,r=-1;

void enqueue(int start){
    r++;
    queue[r]=start;
}

int dequeue(){
    
    return queue[f++];
}

void bfs(int start,int vertex){
    
    for(int i=1;i<=vertex;i++)
    {
        visited[i]=0;
    }
    enqueue(start);
    visited[start]=1;
    while(f<=r){
        int a=dequeue();
        printf("%d\t",a);
        for(int i=1;i<=vertex;i++)
        {
            if(graph[a][i]==1&&!visited[i])
            {
                enqueue(i);
                visited[i]=1;
            }
        }
    }
}

int main(){
    int n,i,j,start;
    printf("enter the no of vertices: ");
    scanf("%d",&n);
    printf("enter the start vertex: ");
    scanf("%d",&start);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&graph[i][j]);
        }
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d\t",graph[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    bfs(start,n);
}