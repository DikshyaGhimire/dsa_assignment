# Data Structure Used:

- Graph (Adjacency Matrix): 
The graph is represented using a 2D array where graph[i][j] = 1 indicates an edge between vertex i and vertex j.

- Queue (BFS):
A queue is used in Breadth First Search to traverse vertices level by level.

- Recursion (DFS):
Depth First Search uses recursion, which internally uses the call stack to keep track of visited vertices.

- Visited Array:
An array is used to mark vertices as visited to avoid revisiting nodes.

# Functions Description

- void dfs(int v) = 1. Performs Depth First Search (DFS) starting from vertex v.
                    2. Marks the current vertex as visited.
                    3. Recursively visits all adjacent unvisited vertices.
                    4. Uses recursion (stack implicitly).
- void bfs(int start) = 1. Performs Breadth First Search (BFS) starting from vertex start.
                       2. Uses a queue to traverse vertices level by level.
                       3. Marks vertices as visited to avoid repetition.
- int main() = 1. Takes number of vertices as input.
               2. Accepts the adjacency matrix of the graph.
               3. Calls DFS and BFS traversal functions.
               4. Displays traversal order.

# Sample Input and Output:

Input:
Enter number of vertices: 4
Enter adjacency matrix: 0 1 1 0
                        1 0 0 1
                        1 0 0 1
                        0 1 1 0

Output: 
DFS: 0 1 3 2
BFS: 0 1 2 3                        