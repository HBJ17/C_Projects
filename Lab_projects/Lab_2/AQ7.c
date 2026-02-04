#include <stdio.h>

int main()
{
    int arr[25], i, key, count = 0;

    printf("Enter 25 numbers:\n");
    for (i = 0; i < 25; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to be searched: ");
    scanf("%d", &key);

    for (i = 0; i < 25; i++)
    {
        if (arr[i] == key)
            count++;
    }

    if (count > 0)
        printf("Number %d is present %d times in the array.", key, count);
    else
        printf("Number %d is not present in the array.", key);

    return 0;
}
