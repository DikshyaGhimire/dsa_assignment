#include <stdio.h>
void heapify(int a[], int n, int i, int type) {
    int extreme = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if (type == 0) {
        if (l < n && a[l] < a[extreme]) extreme = l;
        if (r < n && a[r] < a[extreme]) extreme = r;
    } 
    else {
        if (l < n && a[l] > a[extreme]) extreme = l;
        if (r < n && a[r] > a[extreme]) extreme = r;
    }
    if (extreme != i) {
        int temp = a[i];
        a[i] = a[extreme];
        a[extreme] = temp;
        heapify(a, n, extreme, type);
    }
}
int main() {
    int a[] = {4, 10, 3, 5, 1};
    int n = 5;
    for (int i = n/2 - 1; i >= 0; i--)
        heapify(a, n, i, 0);
    printf("Min Heap: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
