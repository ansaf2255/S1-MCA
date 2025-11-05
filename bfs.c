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
    visited[start]=1;
}

int dequeue(){
    
    return queue[f++];
}

void bfs(int start,int vertex){
    for(int i=0;i<vertex;i++)
    {
        visited[i]=0;
    }
    while(f<=r){
        int a=dequeue();
        
    }
}

