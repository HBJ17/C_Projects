#include <stdio.h>
#include <stdlib.h>

struct Node {

    int data;
    struct Node* next;
};

struct Node* top = NULL;

int isEmpty() {
    return (top == NULL);
}

void push(int value) {

    struct Node* newNode =
        (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = top;

    top = newNode;

    printf("%d pushed into stack\n", value);
}

void pop() {

    if (isEmpty()) {
        printf("Stack Underflow\n");
        return;
    }

    struct Node* temp = top;

    printf("%d popped from stack\n", top->data);

    top = top->next;

    free(temp);
}

void peek() {

    if (isEmpty()) {
        printf("Stack is Empty\n");
        return;
    }

    printf("Top Element: %d\n", top->data);
}

void display() {

    if (isEmpty()) {
        printf("Stack is Empty\n");
        return;
    }

    struct Node* temp = top;

    printf("Stack Elements:\n");

    while (temp != NULL) {

        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {

    int choice, value;

    while (1) {

        printf("\n--- Stack using Linked List ---\n");

        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. isEmpty\n");
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
                display();
                break;

            case 5:
                if (isEmpty())
                    printf("Stack is Empty\n");
                else
                    printf("Stack is Not Empty\n");
                break;

            case 6:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}