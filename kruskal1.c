#include<stdio.h>
#include<limits.h>
#define MAX 100
int graph[MAX][MAX],result[MAX][MAX],i,j,u,v,n,min=INT_MAX,cost=0,e=0,parent[MAX];
int find(int x, int parent[]){
    if(parent[x]==x){
        return x;
    }
    else{
        return find(parent[x],parent);
    }
}
int Union(int x,int y,int parent[]){
    u=find(x,parent);
    v=find(y,parent);
    if(u==v){
        return 0;
    }
    else{
        parent[v]=u;
        return 1;
    }
}
void kruskal(){
    for(i=0;i<n;i++){
        parent[i]=i;
    }
    while(e<n-1){
        min=INT_MAX;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++){
                if(graph[i][j]<min&&graph[i][j]!=0){
                    min=graph[i][j];
                    u=i;
                    v=j;
                }
            }
        }
        if(min==INT_MAX){
            printf("graph is disconnected");
            break;
        }
            graph[u][v]=INT_MAX;
            graph[v][u]=INT_MAX;
            if(Union(u,v,parent))
            {
                result[u][v]=min;
                result[v][u]=min;
                cost+=min;
                e++;
            printf("{%d,%d}->%d\n",u,v,min);

            }
    }
    printf("Total cost : %d\n",cost);

}

int main(){
    printf("enter the number of vertices:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&graph[i][j]);
        }
    }
    kruskal();
}