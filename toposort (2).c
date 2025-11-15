#include <stdio.h>

int main() {
    int n;
    int e;
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    int graph[10][10];
    int indeg[10] = {0}; 
    int visited[10] = {0}; 
    int u;
    int v;
    int topo[10];            
    int index = 0;  

    
    printf("Enter number of edges: ");
    scanf("%d", &e);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            graph[i][j]=0;
        }
    }
   printf("Enter the adjacency ");
    for(int i=0;i<e;i++){
        scanf("%d %d",&u,&v);
        if(graph[v][u]==1){
            printf("cant be 1 \n");
            graph[u][v]=0;
            e++;
        }else{
          graph[u][v]=1;  
        }
        
        
    }

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            indeg[j] += graph[i][j];
        }
    }

    for (int count = 0; count < n; count++) {
        int found = 0;
        for (int i = 0; i < n; i++) {
            if (indeg[i] == 0 && visited[i] == 0) {
                topo[index++] = i;   
                visited[i] = 1;

                for (int j = 0; j < n; j++)
                    if (graph[i][j] == 1)
                        indeg[j]--;  

                found = 1;
               
                break;
            }
        }
        if (!found) {
            printf("Cycle detected\n");
            return 0;  
        }
    }

    
    printf("Topological Order:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", topo[i]);
    printf("\n");

    return 0;
}