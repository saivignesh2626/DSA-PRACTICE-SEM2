#include <stdio.h>
#include <ctype.h>

#define N 100

// Global stack
char stack[N];
int top = -1;

// Function declarations
void push(char ch);
char pop();
int precedence(char ch);

int main()
{
    char infix[N], postfix[N];
    int i = 0, j = 0;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    while (infix[i] != '\0')
    {
        // Case 1: Operand
        if (isalnum(infix[i]))
        {
            postfix[j++] = infix[i];
        }

        // Case 2: Opening bracket
        else if (infix[i] == '(')
        {
            push(infix[i]);
        }

        // Case 3: Closing bracket
        else if (infix[i] == ')')
        {
            while (top != -1 && stack[top] != '(')
            {
                postfix[j++] = pop();
            }
            pop(); // remove '('
        }

        // Case 4: Operator
        else
        {
            while (top != -1 &&
                   precedence(stack[top]) >= precedence(infix[i]))
            {
                postfix[j++] = pop();
            }
            push(infix[i]);
        }

        i++;
    }

    // Pop remaining operators
    while (top != -1)
    {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';

    printf("Postfix expression: %s", postfix);

    return 0;
}

// Push into stack
void push(char ch)
{
    stack[++top] = ch;
}

// Pop from stack
char pop()
{
    if (top == -1)
        return '\0';
    return stack[top--];
}

// Operator precedence
int precedence(char ch)
{
    if (ch == '(') return 0;
    if (ch == '+' || ch == '-') return 1;
    if (ch == '*' || ch == '/') return 2;
    if (ch == '^') return 3;
    return 0;
}