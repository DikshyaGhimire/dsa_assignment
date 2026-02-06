#include <stdio.h>
#define INF 999
int minDist(int dist[], int visited[], int n) {
int min = INF, idx;
    for (int i = 0; i < n; i++)
        if (!visited[i] && dist[i] < min) {
            min = dist[i];
            idx = i;
}
    return idx;
}
int main() {
int n = 5;
int graph[5][5] = {
        {0,10,0,0,5},
        {0,0,1,0,2},
        {0,0,0,4,0},
        {7,0,6,0,0},
        {0,3,9,2,0}
};
int dist[5], visited[5] = {0};
    for (int i = 0; i < n; i++)
        dist[i] = INF;
        dist[0] = 0;
    for (int i = 0; i < n-1; i++) {
        int u = minDist(dist, visited, n);
        visited[u] = 1;
    for (int v = 0; v < n; v++)    
         if (!visited[v] && graph[u][v] && dist[u] + graph[u][v] < dist[v])
        dist[v] = dist[u] + graph[u][v];
    }
    printf("Shortest distances:\n");
    for (int i = 0; i < n; i++)
    printf("0 -> %d = %d\n", i, dist[i]);
    return 0;
}
