#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* insertbegin(struct Node* head,int value) {
    struct Node* newnode = malloc(sizeof(struct Node));

    if(newnode == NULL) {
        printf("Memory allocation failed!");
        return head;
    }

    newnode->data = value;
    newnode->next = head;
    head = newnode;

    return head;
};

struct Node* insertend(struct Node* head,int value) {
    struct Node* newnode = malloc(sizeof(struct Node));

    if(newnode == NULL) {
        printf("Memory allocation failed!");
        return head;
    }

    newnode->data = value;
    newnode->next = NULL;

    if(head == NULL) {
        return newnode;
    }

    struct Node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newnode;

    return head;
};

int main() {
    int n,i,value;

    printf("Enter number of nodes = ");
    scanf("%d",&n);

    struct Node* head = NULL;
    struct Node* temp = NULL;
    struct Node* newNode = NULL;

    for(i=0;i<n;i++) {
        newNode = malloc(sizeof(struct Node));

        if(newNode == NULL) {
            printf("Memory Allocation Failed!");
            return 1;
        }

        printf("Enter data for the node-%d = ",i+1);
        scanf("%d",&newNode->data);
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    printf("Linked LIsts\n");
    temp = head;
    while(temp!=NULL) {
        printf("%d",temp->data);
        if(temp->next != NULL) {
            printf(" -> ");
        }
        temp = temp->next;
    }
    printf(" -> NULL");


    printf("\nNow insertion at beginning.\n");
    printf("\nEnter value for the node = ");
    scanf("%d",&value);

    head = insertbegin(head,value);

    printf("\nLinked LIsts\n");
    temp = head;
    while(temp!=NULL) {
        printf("%d",temp->data);
        if(temp->next != NULL) {
            printf(" -> ");
        }
        temp = temp->next;
    }
    printf(" -> NULL");

    printf("\nInsertion at end.\n");
    printf("Enter the value to insert = ");
    scanf("%d",&value);

    head = insertend(head,value);

    printf("\nLinked LIsts\n");
    temp = head;
    while(temp!=NULL) {
        printf("%d",temp->data);
        if(temp->next != NULL) {
            printf(" -> ");
        }
        temp = temp->next;
    }
    printf(" -> NULL");

    free(temp);
    free(head);
    free(newNode);

    return 0;
}