# Data Structure Used:

- Stack:
1. A stack is used to store opening brackets (, {, [ while scanning the expression.
2. It follows the Last In First Out (LIFO) principle, which helps in matching the most recent opening bracket with the corresponding closing bracket.

- Array:
The stack is implemented using an array to store characters efficiently.

# Function Description

- push(char c) = Pushes an opening bracket onto the stack.
- pop() = Removes and returns the top element of the stack.
- isBalanced(char exp[]) = Traverses the expression and checks for balanced parenthesis.
- main() = Accepts input expression and prints whether it is balanced.

# Sample Input and Output

Input: (a+b)*(c-d)
Output: Balanced Paranthesis
