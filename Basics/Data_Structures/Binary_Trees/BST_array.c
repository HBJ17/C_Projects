#include <stdio.h>
#include <stdlib.h>

#define SIZE 100
#define EMPTY -1

int tree[SIZE];

// Initialize array
void init() {
    for (int i = 0; i < SIZE; i++)
        tree[i] = EMPTY;
}

// Insert into BST (array)
void insert(int value) {
    int i = 1;

    while (i < SIZE && tree[i] != EMPTY) {
        if (value < tree[i])
            i = 2 * i;
        else if (value > tree[i])
            i = 2 * i + 1;
        else
            return; // duplicate not allowed
    }

    if (i < SIZE)
        tree[i] = value;
    else
        printf("Overflow / No space!\n");
}

// Find minimum index in subtree
int findMinIndex(int i) {
    while (2 * i < SIZE && tree[2 * i] != EMPTY)
        i = 2 * i;
    return i;
}

// Delete node
void deleteNode(int value) {
    int i = 1;

    // Search for node
    while (i < SIZE && tree[i] != EMPTY) {
        if (value < tree[i])
            i = 2 * i;
        else if (value > tree[i])
            i = 2 * i + 1;
        else
            break;
    }

    if (i >= SIZE || tree[i] == EMPTY) {
        printf("Value not found\n");
        return;
    }

    // Case 1: Leaf
    if ((2*i >= SIZE || tree[2*i] == EMPTY) &&
        (2*i+1 >= SIZE || tree[2*i+1] == EMPTY)) {
        tree[i] = EMPTY;
    }

    // Case 2: One child
    else if (2*i < SIZE && tree[2*i] != EMPTY &&
            (2*i+1 >= SIZE || tree[2*i+1] == EMPTY)) {
        tree[i] = tree[2*i];
        tree[2*i] = EMPTY;
    }
    else if (2*i+1 < SIZE && tree[2*i+1] != EMPTY &&
            (2*i >= SIZE || tree[2*i] == EMPTY)) {
        tree[i] = tree[2*i+1];
        tree[2*i+1] = EMPTY;
    }

    // Case 3: Two children
    else {
        int minIndex = findMinIndex(2*i+1);
        tree[i] = tree[minIndex];
        tree[minIndex] = EMPTY;
    }
}

// Traversals
void inorder(int i) {
    if (i < SIZE && tree[i] != EMPTY) {
        inorder(2*i);
        printf("%d ", tree[i]);
        inorder(2*i+1);
    }
}

void preorder(int i) {
    if (i < SIZE && tree[i] != EMPTY) {
        printf("%d ", tree[i]);
        preorder(2*i);
        preorder(2*i+1);
    }
}

void postorder(int i) {
    if (i < SIZE && tree[i] != EMPTY) {
        postorder(2*i);
        postorder(2*i+1);
        printf("%d ", tree[i]);
    }
}

// Main menu
int main() {
    int choice, value;

    init();

    while (1) {
        printf("\n--- BST (Array) Menu ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Inorder\n");
        printf("4. Preorder\n");
        printf("5. Postorder\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insert(value);
                break;

            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteNode(value);
                break;

            case 3:
                printf("Inorder: ");
                inorder(1);
                break;

            case 4:
                printf("Preorder: ");
                preorder(1);
                break;

            case 5:
                printf("Postorder: ");
                postorder(1);
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
}