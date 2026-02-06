# Data Structure Used:

- Graph (Adjacency Matrix):
A 2D array represents the weighted graph.

- Distance Array:
Stores the shortest known distance from the source vertex to every other vertex.

- Visited Array:
Keeps track of vertices whose shortest distance has already been finalized.

# Functions Description:

- int minDist(int dist[], int visited[], int n): 
1. Finds the unvisited vertex with the minimum distance from the source.
2. Returns the index of that vertex.

- int main():
1. Initializes weighted graph using adjacency matrix.
2. Applies Dijkstra’s algorithm from source vertex 0.
3. Displays shortest distance from source to all vertices.

# Sample Input and Output:

Input:
Graph (Adjacency Matrix):
0 10 0 0 5
0 0 1 0 2
0 0 0 4 0
7 0 6 0 0
0 3 9 2 0

Output:
Shortest distances from source 0:
0 -> 0 = 0
0 -> 1 = 8
0 -> 2 = 9
0 -> 3 = 7
0 -> 4 = 5