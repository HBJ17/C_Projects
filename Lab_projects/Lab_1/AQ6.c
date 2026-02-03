#include <stdio.h>

int main() {
    for (int n = 1; n <= 500; n++) {
        int sum = 0, temp = n;
        while (temp > 0) {
            int d = temp % 10;
            sum += d * d * d;
            temp /= 10;
        }
        if (sum == n)
            printf("%d ", n);
    }
    return 0;
}     



 