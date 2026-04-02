#include <stdio.h>

int main() {
    union data {
        int i;
        float f;
    };

    union data u;

    u.i = 42; 
    u.f = 3.14;
    printf("Union as integer: %f\n", u.f); 

    return 0;
}