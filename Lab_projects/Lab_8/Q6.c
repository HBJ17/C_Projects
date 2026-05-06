#include <stdio.h>

#define MAX 100

int q1[MAX], q2[MAX];
int front1 = 0, rear1 = -1;
int front2 = 0, rear2 = -1;

void enqueue(int q[], int *rear, int value) {
    q[++(*rear)] = value;
}

int dequeue(int q[], int *front) {
    return q[(*front)++];
}

void push(int value) {

    enqueue(q2, &rear2, value);

    while (front1 <= rear1) {
        enqueue(q2, &rear2,
                dequeue(q1, &front1));
    }

    while (front2 <= rear2) {
        enqueue(q1, &rear1,
                dequeue(q2, &front2));
    }

    front1 = 0;
    rear2 = -1;
    front2 = 0;

    printf("%d pushed\n", value);
}

void pop() {

    if (front1 > rear1) {
        printf("Stack Underflow\n");
        return;
    }

    printf("%d popped\n",
           dequeue(q1, &front1));
}

void topElement() {

    if (front1 > rear1) {
        printf("Stack is Empty\n");
        return;
    }

    printf("Top Element: %d\n", q1[front1]);
}

void display() {

    if (front1 > rear1) {
        printf("Stack is Empty\n");
        return;
    }

    printf("Stack Elements:\n");

    for (int i = front1; i <= rear1; i++) {
        printf("%d\n", q1[i]);
    }
}

int main() {

    int choice, value;

    while (1) {

        printf("\n--- Stack using Two Queues ---\n");

        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Top\n");
        printf("4. Display\n");
        printf("5. Exit\n");

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
                topElement();
                break;

            case 4:
                display();
                break;

            case 5:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}