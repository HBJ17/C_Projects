#include <stdio.h>

int main() {
    int a;
    int *p; //pointer
    int **q; //pointer to pointer

    a = 10;
    p = &a; //p is storing the address of a
    q = &p; //q is storing the address of p

    printf("%d",**q);

    return 0;
}
