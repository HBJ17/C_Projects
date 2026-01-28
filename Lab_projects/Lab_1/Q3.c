#include <stdio.h>

int main() {
    int item;
    float money, price;

    printf("1-Cola Rs2\n2-Chips Rs1.5\n3-Candy Rs1\n");
    printf("Enter item number: ");
    scanf("%d", &item);
    printf("Enter money: ");
    scanf("%f", &money);

    switch (item) {
        case 1: price = 2; break;
        case 2: price = 1.5; break;
        case 3: price = 1; break;
        default:
            printf("Invalid item\n");
            return 0;
    }

    if (money >= price)
        printf("Change = Rs %.2f\n", money - price);
    else
        printf("Need Rs %.2f more\n", price - money);

    return 0;
}