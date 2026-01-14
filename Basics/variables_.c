#include <stdio.h>
#include <stdbool.h>

int main() {
    // integer
    int a;
    a = 2;
    printf("The value of a is %d\n", a);

    //float
    float b;
    b = 2.5;
    printf("The value of b is %f\n", b);

    //char
    char c;
    c = 'a';
    printf("The value of c is %c\n", c);

    //boolean
    _Bool d;
    d = 1;
    printf("The value of d is %d\n", d);

    // multiple char
    char e[] = "abc";
    printf("The value of e is %s\n", e);

    bool isOnline = true;
    printf("%d", isOnline);
    return 0;
}



