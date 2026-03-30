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
    
    return 0;
}
