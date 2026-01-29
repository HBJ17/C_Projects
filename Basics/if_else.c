#include <stdio.h>

int main() {
    int x;

    printf("Enter a number = ");
    scanf("%d", &x);

    if (x < 0)
        printf("Number is negative");
    else if (x > 0)
        printf("Number is positive");
    else
        printf("It's Zero");

    return 0;
}
