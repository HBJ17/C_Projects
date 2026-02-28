#include <stdio.h>

int max_element(int *arr, int size)
{
    int max = *arr;

    for(int i = 1; i < size; i++)
    {
        if(*(arr + i) > max)
        {
            max = *(arr + i);
        }
    }

    return max;
}

int main()
{
    int i;
    int array[10];
    int result;

    for(i = 0; i < 10; i++)
    {
        printf("Enter element = ");
        scanf("%d", &array[i]);
    }

    result = max_element(array, 10);

    printf("The maximum Element = %d", result);

    return 0;
}