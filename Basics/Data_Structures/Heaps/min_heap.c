#include <stdio.h>

#define MAX 100

int heap[MAX];
int size = 0;

// Swap function
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Insert into Min Heap
void insert(int value) {
    if (size == MAX) {
        printf("Heap is full\n");
        return;
    }

    // Insert at end
    heap[size] = value;
    int current = size;
    size++;

    // Heapify Up
    while (current > 0) {
        int parent = (current - 1) / 2;

        if (heap[parent] > heap[current]) {
            swap(&heap[parent], &heap[current]);
            current = parent;
        } else {
            break;
        }
    }
}

// Delete minimum element
void deleteMin() {
    if (size == 0) {
        printf("Heap is empty\n");
        return;
    }

    printf("Deleted element = %d\n", heap[0]);

    // Move last element to root
    heap[0] = heap[size - 1];
    size--;

    // Heapify Down
    int current = 0;

    while (1) {
        int left = 2 * current + 1;
        int right = 2 * current + 2;
        int smallest = current;

        if (left < size && heap[left] < heap[smallest]) {
            smallest = left;
        }

        if (right < size && heap[right] < heap[smallest]) {
            smallest = right;
        }

        if (smallest != current) {
            swap(&heap[current], &heap[smallest]);
            current = smallest;
        } else {
            break;
        }
    }
}

// Display heap
void display() {
    if (size == 0) {
        printf("Heap is empty\n");
        return;
    }

    printf("Min Heap = ");

    for (int i = 0; i < size; i++) {
        printf("%d ", heap[i]);
    }

    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- MIN HEAP MENU ---\n");
        printf("1. Insert\n");
        printf("2. Delete Min\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter choice = ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter value = ");
                scanf("%d", &value);
                insert(value);
                break;

            case 2:
                deleteMin();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}