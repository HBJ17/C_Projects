#include <stdio.h>

int main() {
    int arr[5] = {32,23,45,5,12};
    int max,min;
    int i;

    max = arr[0];
    for(i=1;i<5;i++) {
        if(arr[i]>max) {
            max = arr[i];
        }
    }

    printf("\n Maximum is = %d \n",max);

    min = arr[0];
    for(i=1;i<5;i++) {
        if(arr[i]<min) {
            min = arr[i];
        }
    }

    printf("\n Minimum is = %d \n",min);

    return 0;
}