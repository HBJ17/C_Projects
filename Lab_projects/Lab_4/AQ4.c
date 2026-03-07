#include <stdio.h>

void swapPointers(int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    int *p = &x;
    int *q = &y;

    swapPointers(&p,&q);

    printf("%d %d",*p,*q);

    return 0;
}