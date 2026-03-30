#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int i;

    // allocate memory for 3 integers
    arr = (int*)malloc(3 * sizeof(int));

    printf("Enter 3 numbers:\n");
    for(i = 0; i < 3; i++)
        scanf("%d", &arr[i]);

    // increase size to 5 integers
    arr = (int*)realloc(arr, 5 * sizeof(int));

    printf("Enter 2 more numbers:\n");
    for(i = 3; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("All elements:\n");
    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}