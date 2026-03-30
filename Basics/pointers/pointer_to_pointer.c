#include <stdio.h>

int main() {
    int a;
    int *p;
    int **q;

    a = 10;
    p = &a;
    q = &p;

    printf("%d",q);

    return 0;
}
