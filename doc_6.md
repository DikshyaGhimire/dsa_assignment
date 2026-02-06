# Data Structure Used:

- Array:
The heap is implemented using an array where parent–child relationships are maintained using index calculations.

- Binary Heap:
A complete binary tree structure that satisfies either:
Min Heap property (parent ≤ children), or Max Heap property (parent ≥ children).

# Functions Description

- void heapify(int arr[], int n, int i, int type): 
1. Maintains the heap property for a subtree rooted at index i.
2. If type = 0, builds a Min Heap.
3. If type = 1, builds a Max Heap.
4. Recursively swaps elements to satisfy heap condition.

- int main(): 
1. Initializes an unsorted array.
2. Calls heapify() to construct the heap.
3. Displays the final heap.

# Sample Input and Output:

Input:
Array elements: 4 10 3 5 1

Output:
Min Heap: 1 4 3 5 10

(If max heap is implemented)

Max Heap: 10 5 3 4 1
