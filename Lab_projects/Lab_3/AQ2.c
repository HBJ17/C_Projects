#include <stdio.h>

#define DAYS 7
#define PRODUCTS 4

int main() {
    int sales[DAYS][PRODUCTS];
    int total[PRODUCTS] = {0};
    int topProduct = 0;

    printf("Enter sales for 7 days and 4 products:\n");

    for(int i = 0; i < DAYS; i++) {
        for(int j = 0; j < PRODUCTS; j++) {
            scanf("%d", &sales[i][j]);
        }
    }

    for(int j = 0; j < PRODUCTS; j++) {
        for(int i = 0; i < DAYS; i++) {
            total[j] += sales[i][j];
        }
    }

    for(int j = 1; j < PRODUCTS; j++) {
        if(total[j] > total[topProduct])
            topProduct = j;
    }

    printf("\nTotal Sales for Each Product:\n");
    for(int j = 0; j < PRODUCTS; j++) {
        printf("Product %d: %d\n", j + 1, total[j]);
    }

    printf("\nTop Selling Product: Product %d\n", topProduct + 1);

    return 0;
}
