#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int *arr[3] = {&a,&b,&c};

    printf("The value stored in pointer = %d\n",arr[1]);
    printf("The value stores in the address = %d",*arr[1]);

    return 0;
}