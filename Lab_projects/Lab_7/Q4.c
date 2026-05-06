#include <stdio.h>
#define MAX 5

int deque[MAX];
int front = -1, rear = -1;

int isEmpty() {
    return (front == -1);
}

int isFull() {
    return ((front == 0 && rear == MAX - 1) ||
            (front == rear + 1));
}

void insertFront(int value) {

    if (isFull()) {
        printf("Deque Overflow\n");
        return;
    }

    if (front == -1) {
        front = rear = 0;
    }
    else if (front == 0) {
        front = MAX - 1;
    }
    else {
        front--;
    }

    deque[front] = value;

    printf("%d inserted at front\n", value);
}

void insertRear(int value) {

    if (isFull()) {
        printf("Deque Overflow\n");
        return;
    }

    if (front == -1) {
        front = rear = 0;
    }
    else if (rear == MAX - 1) {
        rear = 0;
    }
    else {
        rear++;
    }

    deque[rear] = value;

    printf("%d inserted at rear\n", value);
}

void deleteFront() {

    if (isEmpty()) {
        printf("Deque Underflow\n");
        return;
    }

    printf("%d deleted from front\n", deque[front]);

    if (front == rear) {
        front = rear = -1;
    }
    else if (front == MAX - 1) {
        front = 0;
    }
    else {
        front++;
    }
}

void deleteRear() {

    if (isEmpty()) {
        printf("Deque Underflow\n");
        return;
    }

    printf("%d deleted from rear\n", deque[rear]);

    if (front == rear) {
        front = rear = -1;
    }
    else if (rear == 0) {
        rear = MAX - 1;
    }
    else {
        rear--;
    }
}

void getFront() {
    if (isEmpty()) {
        printf("Deque is Empty\n");
        return;
    }

    printf("Front Element: %d\n", deque[front]);
}

void getRear() {
    if (isEmpty()) {
        printf("Deque is Empty\n");
        return;
    }

    printf("Rear Element: %d\n", deque[rear]);
}

void display() {

    if (isEmpty()) {
        printf("Deque is Empty\n");
        return;
    }

    printf("Deque Elements: ");

    int i = front;

    while (1) {
        printf("%d ", deque[i]);

        if (i == rear)
            break;

        i = (i + 1) % MAX;
    }

    printf("\n");
}

int main() {

    int choice, value;

    while (1) {

        printf("\n--- Deque Menu ---\n");
        printf("1. Insert Front\n");
        printf("2. Insert Rear\n");
        printf("3. Delete Front\n");
        printf("4. Delete Rear\n");
        printf("5. Get Front\n");
        printf("6. Get Rear\n");
        printf("7. Display\n");
        printf("8. isEmpty\n");
        printf("9. isFull\n");
        printf("10. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insertFront(value);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                insertRear(value);
                break;

            case 3:
                deleteFront();
                break;

            case 4:
                deleteRear();
                break;

            case 5:
                getFront();
                break;

            case 6:
                getRear();
                break;

            case 7:
                display();
                break;

            case 8:
                if (isEmpty())
                    printf("Deque is Empty\n");
                else
                    printf("Deque is Not Empty\n");
                break;

            case 9:
                if (isFull())
                    printf("Deque is Full\n");
                else
                    printf("Deque is Not Full\n");
                break;

            case 10:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}