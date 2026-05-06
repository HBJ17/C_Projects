#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

int isEmpty() {
    return (front == -1 || front > rear);
}

int isFull() {
    return (rear == MAX - 1);
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow\n");
        return;
    }

    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = value;

    printf("%d inserted into queue\n", value);
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow\n");
        return;
    }

    printf("%d deleted from queue\n", queue[front]);
    front++;

    if (front > rear) {
        front = rear = -1;
    }
}

void displayFront() {
    if (isEmpty()) {
        printf("Queue is Empty\n");
        return;
    }

    printf("Front Element: %d\n", queue[front]);
}

void display() {
    if (isEmpty()) {
        printf("Queue is Empty\n");
        return;
    }

    printf("Queue Elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- Linear Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Front\n");
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
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                displayFront();
                break;

            case 4:
                display();
                break;

            case 5:
                if (isEmpty())
                    printf("Queue is Empty\n");
                else
                    printf("Queue is Not Empty\n");
                break;

            case 6:
                if (isFull())
                    printf("Queue is Full\n");
                else
                    printf("Queue is Not Full\n");
                break;

            case 7:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}