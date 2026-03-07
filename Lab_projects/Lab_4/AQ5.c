#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 2;
    float *prices = (float*)malloc(n * sizeof(float));

    for(int i = 0; i < n; i++)
        scanf("%f", &prices[i]);

    n = 4;
    prices = realloc(prices, n * sizeof(float));

    for(int i = 2; i < n; i++)
        scanf("%f", &prices[i]);

    for(int i = 0; i < n; i++)
        printf("%.2f ", prices[i]);

    free(prices);

    return 0;
}