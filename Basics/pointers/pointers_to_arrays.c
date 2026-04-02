#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int (*p)[3] = &arr;

    printf("Value stored in pointer %d\n",(p)[1]);
    printf("Value stored in the address %d",(*p)[1]);

    return 0;
}