#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

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

    free(temp);
    free(head);
    free(newNode);

    return 0;
}