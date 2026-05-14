#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head = NULL;
struct Node* temp = NULL;

/* INSERT AT END */

struct Node* insert_end(struct Node* head) {

    struct Node* newNode = malloc(sizeof(struct Node));

    printf("Enter the value the node should store = ");
    scanf("%d", &newNode->data);

    newNode->next = NULL;
    newNode->prev = NULL;

    // Empty List
    if(head == NULL) {
        head = newNode;
        return head;
    }

    temp = head;

    // Move to last node
    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

/* DELETE AT END */

struct Node* delete_end(struct Node* head) {

    if(head == NULL) {
        printf("LinkedList is Empty\n");
        return NULL;
    }

    temp = head;

    // Only one node
    if(temp->next == NULL) {
        free(temp);
        return NULL;
    }

    // Move to last node
    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->prev->next = NULL;

    free(temp);

    return head;
}

/* FORWARD DISPLAY */

void display_forward(struct Node* head) {

    if(head == NULL) {
        printf("LinkedList is Empty\n");
        return;
    }

    printf("Forward LinkedList\n");

    temp = head;

    while(temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

/* BACKWARD DISPLAY */

void display_backward(struct Node* head) {

    if(head == NULL) {
        printf("LinkedList is Empty\n");
        return;
    }

    temp = head;

    // Move to last node
    while(temp->next != NULL) {
        temp = temp->next;
    }

    printf("Backward LinkedList\n");

    while(temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->prev;
    }

    printf("NULL\n");
}

/* MAIN FUNCTION */

int main() {

    int choice;

    while(1) {

        printf("\n===== MAIN MENU =====\n");
        printf("1. Insert at End\n");
        printf("2. Delete at End\n");
        printf("3. Display Forward\n");
        printf("4. Display Backward\n");
        printf("5. Exit\n");

        printf("Enter your choice = ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                head = insert_end(head);
                break;

            case 2:
                head = delete_end(head);
                break;

            case 3:
                display_forward(head);
                break;

            case 4:
                display_backward(head);
                break;

            case 5:
                printf("Exiting Program...\n");
                exit(0);

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}