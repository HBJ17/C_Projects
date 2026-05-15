#include <stdio.h>

int partition(int arr[],int low,int hight) {
    int pivot,i,j,t;
    pivot = arr[hight];
    i = low-1;

    for(j=low;j<hight;j++) {
        if(arr[j]<=pivot) {
            i++;
            t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }

    t = arr[i+1];
    arr[i+1] = arr[hight];
    arr[hight] = t;
    return (i+1);
}

void quickSort(int arr[],int low,int high) {
    int pi;
    if(low < high) {
        pi = partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}

int main() {
    int i;
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0,n-1);

    for(i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}