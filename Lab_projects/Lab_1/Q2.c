#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 0)
        printf("Invalid age\n");
    else if (age <= 12)
        printf("Ticket price: Rs.8\n");
    else if (age <= 19)
        printf("Ticket price: Rs.12\n");
    else if (age <= 59)
        printf("Ticket price: Rs.15\n");
    else
        printf("Ticket price: Rs.10\n");

    return 0;
}