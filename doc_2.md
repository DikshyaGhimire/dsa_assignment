# Data Structure Used:

- Stack
1. Used to temporarily store operators and parentheses during the conversion process.
2. Helps in maintaining correct operator precedence and associativity.

- Array:
Used to store the infix expression and the resulting postfix expression.

# Fuctions Description

- priority(char x) = Returns precedence of operators(+, -, *, /)
- push(char x)/pop() = Stack operations.
- main() = Converts infix expression to postfix and displays result.

# Sample Input and Output

Input: A+B*C
Output: ABC*+
