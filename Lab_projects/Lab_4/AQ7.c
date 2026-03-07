#include <stdio.h>
#include <stdlib.h>

int main()
{
    int customers;

    scanf("%d", &customers);

    float *purchase[customers];

    for(int i = 0; i < customers; i++)
    {
        int items;
        scanf("%d", &items);

        purchase[i] = (float*)malloc(items * sizeof(float));

        float total = 0;

        for(int j = 0; j < items; j++)
        {
            scanf("%f", &purchase[i][j]);
            total += purchase[i][j];
        }

        printf("Customer %d Total = %.2f\n", i+1, total);
    }

    return 0;
}