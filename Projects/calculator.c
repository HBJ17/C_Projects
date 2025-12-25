#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, result;
    char operator;

    printf("Enter a Number: ");
    scanf("%f", &num1);

    printf("Enter the operator: ");
    scanf(" %c", &operator);   // space avoids newline issue

    printf("Enter another Number: ");
    scanf("%f", &num2);

    if (operator == '+') {
        result = num1 + num2;
        printf("Result = %f\n", result);
    }
    else if (operator == '-') {
        result = num1 - num2;
        printf("Result = %f\n", result);
    }
    else if (operator == '*') {
        result = num1 * num2;
        printf("Result = %f\n", result);
    }
    else if (operator == '/') {
        result = num1 / num2;
        printf("Result = %f\n", result);
    }
    else if (operator == '^') {
        result = pow(num1, num2);
        printf("Result = %f\n", result);
    }
    else if (operator == '%') {
        int a = (int)num1;
        int b = (int)num2;
        printf("Result = %d\n", a % b);
    }
    else {
        printf("Sorry!! This Calculator is not equipped to perform the mentioned operation.\n");
    }

    return 0;
}
