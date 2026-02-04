#include <stdio.h>
#include <math.h>

long int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

double sin_series(double x, int terms)
{
    double sum = 0;
    int sign = 1;

    for (int i = 1; i <= terms; i++)
    {
        sum = sum + sign * (pow(x, 2*i - 1) / factorial(2*i - 1));
        sign = -sign;  
    }
    return sum;
}

int main()
{
    double x;
    int terms;

    printf("Enter value of x (in radians): ");
    scanf("%lf", &x);

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    printf("sin(%lf) = %lf", x, sin_series(x, terms));

    return 0;
}
