#include <stdio.h>

void binary(int num) {
    if (num == 0) {
        return;
    }

    binary(num / 2);
    printf("%d", num % 2);
}

int main() {
    int num;

    printf("Enter a number = ");
    scanf("%d", &num);

    printf("Binary Equivalent = ");

    if (num == 0) {
        printf("0");
    } else {
        binary(num);
    }

    return 0;
}
