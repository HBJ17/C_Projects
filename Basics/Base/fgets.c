#include <stdio.h>

int main() {
    char name[50];
    int n;
    
    printf("Enter our age : ");
    scanf("%d",&n);

    getchar(); //clears buffer of "\n"

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Hello, %s", name);
    printf("You are %d years old.\n", n);

    return 0;
}