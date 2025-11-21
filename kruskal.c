#include <stdio.h>
#include <stdlib.h>

// ---------- Edge structure ----------
typedef struct {
    int u, v;    // vertices
    int w;       // weight
} Edge;

// ---------- Disjoint Set / Union-Find ----------
int parent[1000];

// find the parent of a set
int find(int x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);   // path compression
}

// unite two sets
void unite(int a, int b) {
    a = find(a);
    b = find(b);
    parent[b] = a;
}

// sort edges by weight
int cmp(const void *a, const void *b) {
    return ((Edge*)a)->w - ((Edge*)b)->w;
}

int main() {
    int n, m;   // n = vertices, m = edges
    printf("Enter number of vertices and edges: ");
    scanf("%d %d", &n, &m);

    Edge edges[m];
    printf("Enter each edge as: u v weight\n");
    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].w);
    }

    // init union-find
    for (int i = 0; i < n; i++)
        parent[i] = i;

    // sort edges by weight
    qsort(edges, m, sizeof(Edge), cmp);

    printf("\nMinimum Spanning Tree:\n");

    int mst_weight = 0;

    // Kruskal's algorithm
    for (int i = 0; i < m; i++) {
        int u = edges[i].u;
        int v = edges[i].v;
        int w = edges[i].w;

        if (find(u) != find(v)) {   // if they are not in same set
            unite(u, v);
            mst_weight += w;
            printf("%d -- %d  (weight %d)\n", u, v, w);
        }
    }

    printf("\nTotal MST weight = %d\n", mst_weight);
    return 0;
}
