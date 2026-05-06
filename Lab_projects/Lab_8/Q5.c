#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch) {
    stack[++top] = ch;
}

char pop() {
    return stack[top--];
}

int isMatching(char open, char close) {

    return ((open == '(' && close == ')') ||
            (open == '[' && close == ']') ||
            (open == '{' && close == '}'));
}

int main() {

    char exp[100];
    int i;

    printf("Enter expression: ");
    scanf("%s", exp);

    for (i = 0; exp[i] != '\0'; i++) {

        char ch = exp[i];

        if (ch == '(' || ch == '[' || ch == '{') {

            push(ch);
        }

        else if (ch == ')' || ch == ']' || ch == '}') {

            if (top == -1) {
                printf("Not Balanced\n");
                return 0;
            }

            char open = pop();

            if (!isMatching(open, ch)) {
                printf("Not Balanced\n");
                return 0;
            }
        }
    }

    if (top == -1)
        printf("Balanced Expression\n");
    else
        printf("Not Balanced\n");

    return 0;
}