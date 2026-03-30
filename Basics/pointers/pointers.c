#include <stdio.h>

int main() {
    int a = 10;
    int *p;

    p = &a;

    *p = 20;

    printf("%d",a);

    return 0;
}