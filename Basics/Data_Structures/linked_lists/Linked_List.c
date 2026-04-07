#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // Allocate memory with NULL check
    head = (struct Node*)malloc(sizeof(struct Node));
    if (head == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    second = (struct Node*)malloc(sizeof(struct Node));
    if (second == NULL) {
        printf("Memory allocation failed\n");
        free(head);
        return 1;
    }

    third = (struct Node*)malloc(sizeof(struct Node));
    if (third == NULL) {
        printf("Memory allocation failed\n");
        free(head);
        free(second);
        return 1;
    }

    // Assign data and link nodes
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    // Traverse and print
    struct Node* temp = head;

    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL)
            printf(" -> ");
        temp = temp->next;
    }
    printf(" -> NULL\n");

    // Free memory
    free(third);
    free(second);
    free(head);

    return 0;
}