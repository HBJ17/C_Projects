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

    /* FIRST NODE */

    if(head == NULL) {

        newNode->next = newNode;
        newNode->prev = newNode;

        head = newNode;

        return head;
    }

    temp = head;

    /* MOVE TO LAST NODE */

    while(temp->next != head) {
        temp = temp->next;
    }

    /* LINKING */

    temp->next = newNode;
    newNode->prev = temp;

    newNode->next = head;
    head->prev = newNode;

    return head;
}

/* DELETE AT END */

struct Node* delete_end(struct Node* head) {

    if(head == NULL) {
        printf("Circular LinkedList is Empty\n");
        return NULL;
    }

    temp = head;

    /* ONLY ONE NODE */

    if(temp->next == head) {
        free(temp);
        return NULL;
    }

    /* MOVE TO LAST NODE */

    while(temp->next != head) {
        temp = temp->next;
    }

    /* temp = last node */

    temp->prev->next = head;
    head->prev = temp->prev;

    free(temp);

    return head;
}

/* DISPLAY FORWARD */

void display_forward(struct Node* head) {

    if(head == NULL) {
        printf("Circular LinkedList is Empty\n");
        return;
    }

    temp = head;

    printf("Forward Circular Doubly LinkedList\n");

    do {
        printf("%d->", temp->data);
        temp = temp->next;
    } while(temp != head);

    printf("(HEAD)\n");
}

/* DISPLAY BACKWARD */

void display_backward(struct Node* head) {

    if(head == NULL) {
        printf("Circular LinkedList is Empty\n");
        return;
    }

    /* MOVE TO LAST NODE */

    temp = head->prev;

    printf("Backward Circular Doubly LinkedList\n");

    struct Node* last = temp;

    do {
        printf("%d->", temp->data);
        temp = temp->prev;
    } while(temp != last);

    printf("(LAST)\n");
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