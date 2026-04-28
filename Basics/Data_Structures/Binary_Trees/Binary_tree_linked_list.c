#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* root = NULL;

// Create node
struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert (level order)
struct node* insert(struct node* root, int data) {
    struct node* newNode = createNode(data);

    if (root == NULL)
        return newNode;

    struct node* queue[100];
    int front = 0, rear = 0;

    queue[rear++] = root;

    while (front < rear) {
        struct node* temp = queue[front++];

        if (temp->left == NULL) {
            temp->left = newNode;
            return root;
        } else {
            queue[rear++] = temp->left;
        }

        if (temp->right == NULL) {
            temp->right = newNode;
            return root;
        } else {
            queue[rear++] = temp->right;
        }
    }
    return root;
}

// Delete deepest node
void deleteDeepest(struct node* root, struct node* dnode) {
    struct node* queue[100];
    int front = 0, rear = 0;

    queue[rear++] = root;

    while (front < rear) {
        struct node* temp = queue[front++];

        if (temp->left) {
            if (temp->left == dnode) {
                free(temp->left);
                temp->left = NULL;
                return;
            } else {
                queue[rear++] = temp->left;
            }
        }

        if (temp->right) {
            if (temp->right == dnode) {
                free(temp->right);
                temp->right = NULL;
                return;
            } else {
                queue[rear++] = temp->right;
            }
        }
    }
}

// Delete node
struct node* deleteNode(struct node* root, int key) {
    if (root == NULL)
        return NULL;

    if (root->left == NULL && root->right == NULL) {
        if (root->data == key) {
            free(root);
            return NULL;
        } else {
            return root;
        }
    }

    struct node* queue[100];
    int front = 0, rear = 0;

    queue[rear++] = root;

    struct node* temp;
    struct node* keyNode = NULL;

    while (front < rear) {
        temp = queue[front++];

        if (temp->data == key)
            keyNode = temp;

        if (temp->left)
            queue[rear++] = temp->left;

        if (temp->right)
            queue[rear++] = temp->right;
    }

    if (keyNode != NULL) {
        int x = temp->data;   // deepest node value
        deleteDeepest(root, temp);
        keyNode->data = x;
    }

    return root;
}

// Traversals
void inorder(struct node* root) {
    if (root) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct node* root) {
    if (root) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node* root) {
    if (root) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

// Main menu
int main() {
    int choice, value;

    while (1) {
        printf("\n--- Binary Tree Menu ---\n");
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
                root = insert(root, value);
                break;

            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                root = deleteNode(root, value);
                break;

            case 3:
                printf("Inorder: ");
                inorder(root);
                break;

            case 4:
                printf("Preorder: ");
                preorder(root);
                break;

            case 5:
                printf("Postorder: ");
                postorder(root);
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
}