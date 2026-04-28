#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int n = 5;

    bubbleSort(arr, n);

    printf("Sorted array (Bubble Sort): ");
    printArray(arr, n);

    return 0;
}