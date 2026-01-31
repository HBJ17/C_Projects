#include <stdio.h>

int main() {
    int days;
    float fine = 0;

    printf("Enter number of days book is returned late: ");
    scanf("%d", &days);

    if (days <= 5) {
        fine = days * 0.50;
        printf("Fine = Rs. %f", fine);
    }
    else if (days <= 10) {
        fine = days * 1;
        printf("Fine = Rs. %f", fine);
    }
    else if (days <= 30) {
        fine = days * 5;
        printf("Fine = Rs. %f", fine);
    }
    else {
        printf("Membership cancelled");
    }

    return 0;
}
