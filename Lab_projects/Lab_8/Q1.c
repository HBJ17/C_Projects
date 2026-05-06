#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

int isEmpty() {
    return (top == -1);
}

int isFull() {
    return (top == MAX - 1);
}

void push(int value) {

    if (isFull()) {
        printf("Stack Overflow\n");
        return;
    }

    top++;
    stack[top] = value;

    printf("%d pushed into stack\n", value);
}

void pop() {

    if (isEmpty()) {
        printf("Stack Underflow\n");
        return;
    }

    printf("%d popped from stack\n", stack[top]);
    top--;
}

void peek() {

    if (isEmpty()) {
        printf("Stack is Empty\n");
        return;
    }

    printf("Top Element: %d\n", stack[top]);
}

void display() {

    if (isEmpty()) {
        printf("Stack is Empty\n");
        return;
    }

    printf("Stack Elements:\n");

    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

int main() {

    int choice, value;

    while (1) {

        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. isEmpty\n");
        printf("6. isFull\n");
        printf("7. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                if (isEmpty())
                    printf("Stack is Empty\n");
                else
                    printf("Stack is Not Empty\n");
                break;

            case 6:
                if (isFull())
                    printf("Stack is Full\n");
                else
                    printf("Stack is Not Full\n");
                break;

            case 7:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}