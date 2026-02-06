#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *prev, *next;
};
struct node *head = NULL;
void insertAtEnd(int val) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }
    struct node *temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}
void deleteNode(int val) {
    struct node *temp = head;
    while (temp && temp->data != val)
        temp = temp->next;
    if (!temp) return;
    if (temp->prev)
        temp->prev->next = temp->next;
    else
        head = temp->next;
    if (temp->next)
        temp->next->prev = temp->prev;
    free(temp);
}
void display() {
    struct node *temp = head;
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main() {
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    deleteNode(20);
    display();
    return 0;
}
