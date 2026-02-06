#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *prev, *next;
};
struct node *head = NULL;
void insert(int val) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL)
        head->prev = newNode;
    head = newNode;
}
void reverseTraversal() {
    struct node *temp = head;
    if (temp == NULL) return;
    while (temp->next != NULL)
        temp = temp->next;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
}
int main() {
    insert(10);
    insert(20);
    insert(30);
    printf("Reverse Traversal: ");
    reverseTraversal();
    return 0;
}
