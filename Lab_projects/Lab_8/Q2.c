#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    stack[++top] = value;
}

int pop() {
    return stack[top--];
}

int main() {

    char postfix[100];
    int i, op1, op2, result;

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    for (i = 0; postfix[i] != '\0'; i++) {

        char ch = postfix[i];

        if (isdigit(ch)) {

            push(ch - '0');
        }

        else {

            op2 = pop();
            op1 = pop();

            switch (ch) {

                case '+':
                    push(op1 + op2);
                    break;

                case '-':
                    push(op1 - op2);
                    break;

                case '*':
                    push(op1 * op2);
                    break;

                case '/':

                    if (op2 == 0) {
                        printf("Division by zero error\n");
                        return 0;
                    }

                    push(op1 / op2);
                    break;

                case '^':
                    push(pow(op1, op2));
                    break;

                default:
                    printf("Invalid Operator\n");
                    return 0;
            }
        }
    }

    result = pop();

    printf("Result = %d\n", result);

    return 0;
}