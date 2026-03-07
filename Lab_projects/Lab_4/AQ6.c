#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c, sum = 0;

    scanf("%d %d", &r, &c);

    int **arr = (int**)malloc(r * sizeof(int*));

    for(int i = 0; i < r; i++)
        arr[i] = (int*)calloc(c, sizeof(int));

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            sum += arr[i][j];

    printf("Sum = %d", sum);

    return 0;
}