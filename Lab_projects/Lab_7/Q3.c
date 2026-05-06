#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node *front = NULL, *rear = NULL;

int isEmpty() {
    return (front == NULL);
}

void enqueue(int value) {
    struct Node* newNode =
        (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    printf("%d inserted into queue\n", value);
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow\n");
        return;
    }

    struct Node* temp = front;

    printf("%d deleted from queue\n", front->data);

    front = front->next;

    if (front == NULL)
        rear = NULL;

    free(temp);
}

void displayFront() {
    if (isEmpty()) {
        printf("Queue is Empty\n");
        return;
    }

    printf("Front Element: %d\n", front->data);
}

void display() {
    if (isEmpty()) {
        printf("Queue is Empty\n");
        return;
    }

    struct Node* temp = front;

    printf("Queue Elements: ");

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- Queue using Linked List ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Front\n");
        printf("4. Display\n");
        printf("5. isEmpty\n");
        printf("6. Exit\n");

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
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}