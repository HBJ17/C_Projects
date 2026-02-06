#include <stdio.h>

float calculateTotal(int price[], int qty[], int n)
{
    float total = 0;
    for(int i = 0; i < n; i++)
        total += price[i] * qty[i];
    return total;
}

float calculateDiscount(float total)
{
    if(total < 1000)
        return total * 0.05;
    else if(total < 5000)
        return total * 0.10;
    else
        return total * 0.15;
}

void printBill(int price[], int qty[], int n, float total, float discount)
{
    printf("Item  Price  Quantity  Subtotal\n");

    for(int i = 0; i < n; i++)
        printf("Item%d  %d     %d        %d\n",
               i+1, price[i], qty[i], price[i]*qty[i]);

    printf("TOTAL %.0f\n", total);
    printf("Discount %.0f\n", discount);
    printf("GRAND TOTAL %.0f\n", total - discount);
}

int main()
{
    int n = 5;
    int price[5], qty[5];
    float total, discount;

    for(int i = 0; i < n; i++)
    {
        printf("Enter price of Item %d: ", i+1);
        scanf("%d", &price[i]);
        printf("Enter quantity of Item %d: ", i+1);
        scanf("%d", &qty[i]);
    }

    total = calculateTotal(price, qty, n);
    discount = calculateDiscount(total);

    printBill(price, qty, n, total, discount);

    return 0;
}
