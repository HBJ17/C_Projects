#include <stdio.h>

int main() {
    int balance = 1000;
    int withdraw;
    int count = 0;

    while (1) {
        printf("Enter withdrawal amount: ");
        scanf("%d", &withdraw);

        if (balance - withdraw >= 100) {
            balance = balance - withdraw;
            count++;
            printf("Withdrawal successful\n");
            printf("Remaining balance = %d\n", balance);
        }
        else {
            printf("Minimum balance limit reached\n");
            break;
        }
    }

    printf("Total successful withdrawals = %d", count);

    return 0;
}
