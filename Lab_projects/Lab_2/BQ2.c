#include <stdio.h>

void printRoman(int year)
{
    while (year >= 1000) {
        printf("m");
        year -= 1000;
    }
    while (year >= 500) {
        printf("d");
        year -= 500;
    }
    while (year >= 100) {
        printf("c");
        year -= 100;
    }
    while (year >= 50) {
        printf("l");
        year -= 50;
    }
    while (year >= 10) {
        printf("x");
        year -= 10;
    }
    while (year >= 5) {
        printf("v");
        year -= 5;
    }
    while (year >= 1) {
        printf("i");
        year -= 1;
    }
}

int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    printf("Roman equivalent: ");
    printRoman(year);

    return 0;
}

