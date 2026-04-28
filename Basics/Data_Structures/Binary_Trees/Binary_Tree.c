#include <stdio.h>

#define SIZE 100

int tree[SIZE];

void init() {
    for(int i = 0; i < SIZE; i++) {
        tree[i] = -1;   // -1 means empty
    }
}

void insert(int value, int index) {
    if(index >= SIZE) {
        printf("Tree overflow\n");
        return;
    }

    tree[index] = value;
}

void display() {
    printf("Tree elements:\n");
    for(int i = 1; i < SIZE; i++) {
        if(tree[i] != -1) {
            printf("Index %d -> %d\n", i, tree[i]);
        }
    }
}

int main() {
    init();

    insert(10, 1);  // root
    insert(20, 2);  // left child of 10
    insert(30, 3);  // right child of 10
    insert(40, 4);
    insert(50, 5);

    display();

    return 0;
}