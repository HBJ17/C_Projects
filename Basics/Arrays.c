#include <stdio.h>

int main() {

    int arr1[3] = {5, 10, 15};
    printf("%d %d %d\n", arr1[0], arr1[1], arr1[2]);

    int arr2[5] = {2, 4, 6, 8, 10};
    int i;
    for(i = 0; i < 5; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    int arr3[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    for(i = 0; i < 5; i++)
        sum += arr3[i];
    printf("Sum = %d\n", sum);

    int arr4[5] = {3, 7, 2, 9, 4};
    int max = arr4[0];
    for(i = 1; i < 5; i++)
        if(arr4[i] > max)
            max = arr4[i];
    printf("Max = %d\n", max);

    int arr5[5] = {1, 2, 4, 7, 8};
    int count = 0;
    for(i = 0; i < 5; i++)
        if(arr5[i] % 2 == 0)
            count++;
    printf("Even count = %d\n", count);

    return 0;
}
