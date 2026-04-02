#include <stdio.h>

int change(int *ptr) {
    *ptr = 30;
}

// now it's not like a pass by value

int main() {
    int x;
    change(&x);

    printf("%d",x);

    return 0;
}

