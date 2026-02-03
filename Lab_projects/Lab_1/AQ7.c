#include <stdio.h>

int sqSum(int n) {
    int s = 0;
    while (n > 0) {
        int d = n % 10;
        s += d * d;
        n /= 10;
    }
    return s;
}

int main() {
    int n, a = 1, b = 2, c;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("%d %d ", a, b);
    for (int i = 3; i <= n; i++) {
        c = sqSum(a) + sqSum(b);
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}
