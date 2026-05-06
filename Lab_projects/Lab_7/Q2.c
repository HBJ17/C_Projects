#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

int isEmpty() {
    return (front == -1);
}

int isFull() {
    return ((rear + 1) % MAX == front);
}

void enqueue(int value) {
    if (isFull()) {
        printf("Circular Queue Overflow\n");
        return;
    }

    if (front == -1)
        front = 0;

    rear = (rear + 1) % MAX;
    queue[rear] = value;

    printf("%d inserted\n", value);
}

void dequeue() {
    if (isEmpty()) {
        printf("Circular Queue Underflow\n");
        return;
    }

    printf("%d deleted\n", queue[front]);

    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAX;
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

    int i = front;

    while (1) {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % MAX;
    }

    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- Circular Queue Menu ---\n");
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