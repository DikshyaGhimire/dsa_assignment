#include <stdio.h>
#include <ctype.h>
#define MAX 100
char stack[MAX];
int top = -1;
void push(char x) { stack[++top] = x; 
}
char pop() { return stack[top--];
 }
int priority(char x) {
    if (x == '(') return 0;
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 2;
    return 0;
}
int main() {
    char infix[MAX], postfix[MAX];
    int k = 0;
    printf("Enter infix expression: ");
    scanf("%s", infix);
    for (int i = 0; infix[i]; i++) {
        if (isalnum(infix[i]))
            postfix[k++] = infix[i];
        else if (infix[i] == '(')
            push(infix[i]);
        else if (infix[i] == ')') 
        {
            while (stack[top] != '(')
                postfix[k++] = pop();
            pop();
        }
        else {
            while (priority(stack[top]) >= priority(infix[i]))
                postfix[k++] = pop();
            push(infix[i]);
        }
    }
    while (top != -1)
        postfix[k++] = pop();
    postfix[k] = '\0';
    printf("Postfix Expression: %s\n", postfix);
    return 0;
}
