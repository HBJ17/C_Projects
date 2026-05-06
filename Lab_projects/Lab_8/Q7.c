#include <stdio.h>

#define MAX 100

int stack[MAX];
int minStack[MAX];

int top = -1;
int minTop = -1;

void push(int value) {

    stack[++top] = value;

    if (minTop == -1 || value <= minStack[minTop]) {

        minStack[++minTop] = value;
    }

    printf("%d pushed\n", value);
}

void pop() {

    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }

    int removed = stack[top--];

    if (removed == minStack[minTop]) {
        minTop--;
    }

    printf("%d popped\n", removed);
}

void getMin() {

    if (minTop == -1) {
        printf("Stack is Empty\n");
        return;
    }

    printf("Minimum Element: %d\n",
           minStack[minTop]);
}

void peek() {

    if (top == -1) {
        printf("Stack is Empty\n");
        return;
    }

    printf("Top Element: %d\n", stack[top]);
}

void display() {

    if (top == -1) {
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

        printf("\n--- Stack with Min Element ---\n");

        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Get Minimum\n");
        printf("5. Display\n");
        printf("6. Exit\n");

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
                getMin();
                break;

            case 5:
                display();
                break;

            case 6:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}