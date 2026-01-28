#include <stdio.h>

int main() {
    int s1 = 145, s2 = 230, s3 = 185;
    int total = s1 + s2 + s3;

    printf("Minutes = %d\n", total / 60);
    printf("Seconds = %d\n", total % 60);

    return 0;
}