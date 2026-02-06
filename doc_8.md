# Data Structure Used:

- Array:
1. Used to store randomly generated integers.
2. Sorting is performed directly on this array.

- Variables(Counters):
Integer variables are used to count: - Number of comparisons
                                     - Number of swaps

# Functions Description

- void bubbleSort(int arr[], int n):
1. Sorts the array using Bubble Sort.
2. Counts: - Number of comparisons
           - Number of swaps
3. Updates global variables comp and swap.

- int main():
1. Accepts number of elements N.
2. Generates random numbers.
3. Calls sorting function.
4. Displays sorted array along with comparisons and swaps.

# Sample Input and Output:

Input:
Enter N: 5
Generated Array: 34 12 98 45 6

Output:
Before Sorting:
34 12 98 45 6

After Sorting:
6 12 34 45 98

Comparisons: 10
Swaps:  7
