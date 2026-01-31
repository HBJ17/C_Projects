#include <stdio.h>

int main() {
    int age;
    char sex;
    char health;
    char location;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter sex (M/F): ");
    scanf(" %c", &sex);

    printf("Enter health (E = Excellent / P = Poor): ");
    scanf(" %c", &health);

    printf("Enter location (C = City / V = Village): ");
    scanf(" %c", &location);

    if (health == 'E' && age >= 25 && age <= 35 && location == 'C' && sex == 'M') {
        printf("Person is insured\n");
        printf("Premium = Rs. 4 per thousand\n");
        printf("Maximum policy amount = Rs. 200000\n");
    }
    else if (health == 'E' && age >= 25 && age <= 35 && location == 'C' && sex == 'F') {
        printf("Person is insured\n");
        printf("Premium = Rs. 3 per thousand\n");
        printf("Maximum policy amount = Rs. 100000\n");
    }
    else if (health == 'P' && age >= 25 && age <= 35 && location == 'V' && sex == 'M') {
        printf("Person is insured\n");
        printf("Premium = Rs. 6 per thousand\n");
        printf("Maximum policy amount = Rs. 10000\n");
    }
    else {
        printf("Person is not insured\n");
    }

    return 0;
}
