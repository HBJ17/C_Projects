#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insertBegin(int val) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

void insertEnd(int val) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while (temp->next) temp = temp->next;

    temp->next = newNode;
}

void insertPos(int val, int pos) {
    if (pos == 0) {
        insertBegin(val);
        return;
    }

    struct Node* temp = head;
    for (int i = 0; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) return;

    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteBegin() {
    if (head == NULL) return;
    struct Node* temp = head;
    head = head->next;
    free(temp);
}

void deleteEnd() {
    if (head == NULL) return;

    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }

    struct Node* temp = head;
    while (temp->next->next) temp = temp->next;

    free(temp->next);
    temp->next = NULL;
}

void deletePos(int pos) {
    if (pos == 0) {
        deleteBegin();
        return;
    }

    struct Node* temp = head;
    for (int i = 0; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) return;

    struct Node* del = temp->next;
    temp->next = del->next;
    free(del);
}

int search(int key) {
    struct Node* temp = head;
    int pos = 0;

    while (temp) {
        if (temp->data == key) return pos;
        temp = temp->next;
        pos++;
    }
    return -1;
}

int retrieve(int pos) {
    struct Node* temp = head;

    for (int i = 0; i < pos && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) return -1;
    return temp->data;
}

int isEmpty() {
    return head == NULL;
}

void display() {
    struct Node* temp = head;
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void clear() {
    while (head != NULL) {
        deleteBegin();
    }
}

int main() {
    insertBegin(10);
    insertEnd(20);
    insertPos(15, 1);
    display();

    deletePos(1);
    display();

    printf("%d\n", search(20));
    printf("%d\n", retrieve(0));

    clear();
    display();

    return 0;
}