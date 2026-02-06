#include <stdio.h>

int check(int n)
{
    int count = 0;

    while(n > 0)
    {
        if(n % 10 == 5)
            count++;
        else
            count = 0;

        if(count == 3)
            return 1;

        n = n / 10;
    }

    return 0;
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("%d", check(n));
    return 0;
}
