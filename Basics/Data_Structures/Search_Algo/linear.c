#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6};

    int value,i;

    printf("The array = ");
    for(i = 0;i<(sizeof(arr)/sizeof(arr[0]));i++) {
        printf(" %d",arr[i]);
    }

    printf("\nEnter the number you want to search = \n");
    scanf("%d",&value);

    printf("\nSearching\n");

    for(i = 0;i<(sizeof(arr)/sizeof(arr[0]));i++) {
        if(arr[i] == value) {
            printf("\nValue is found at position %d\n",i+1);
            return 0;
        }
    }

    return 0;

}