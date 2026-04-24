#include <stdio.h>

#define MAX 100

int arr[MAX];
int size = 0;

int isEmpty() {
    return size == 0;
}

int isFull() {
    return size == MAX;
}

void insert(int index, int value) {
    if (isFull() || index < 0 || index > size) return;
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    size++;
}

void deleteAt(int index) {
    if (isEmpty() || index < 0 || index >= size) return;
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

int retrieve(int index) {
    if (index < 0 || index >= size) return -1;
    return arr[index];
}

int search(int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) return i;
    }
    return -1;
}

void display() {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void clear() {
    size = 0;
}

int main() {
    insert(0, 10);
    insert(1, 20);
    insert(1, 15);
    display();

    deleteAt(1);
    display();

    printf("%d\n", retrieve(1));
    printf("%d\n", search(20));

    clear();
    display();

    return 0;
}