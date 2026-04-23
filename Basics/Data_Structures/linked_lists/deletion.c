#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* deleteBeginning(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return NULL;
    }

    struct Node* temp = head;
    head = head->next;
    free(temp);

    return head;
}

struct Node* deleteend(struct Node* head) {
    if(head == NULL) {
        printf("List is Empty");
        return NULL;
    }

    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    struct Node* temp = head;
    while(temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;

    return head;
}

struct Node* deleteatposition(struct Node* head,int pos) {

    if(head == NULL) {
        printf("The List is empty");
        return NULL;
    }

    if(pos == 1) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct Node* temp = head;
    for(int p = 1; p < pos-1 && temp->next != NULL; p++) {
        temp = temp->next;
    }

    if(temp->next == NULL) {
        printf("Position out of bounds");
        return head;
    }

    struct Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    free(nodeToDelete);

    return head;
}

int main() {
    int n,i;

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

    printf("\nDeleting at beginning\n");
    head = deleteBeginning(head);

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

    printf("\nDeleting at end\n");
    head = deleteend(head);

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

    printf("\nDeleting at a position\n");
    printf("Enter the position to delete = ");
    int k;
    scanf("%d",&k);
    head = deleteatposition(head, k);

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

    free(temp);
    free(head);
    free(newNode);

    return 0;
}