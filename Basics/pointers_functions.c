#include <stdio.h>

int change(int *ptr) {
    *ptr = 30;
}

int main() {
    int x;
    change(&x);

    printf("%d",x);

    return 0;
}

