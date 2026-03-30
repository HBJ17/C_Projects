#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[50];

    // 1. strlen
    printf("Length: %lu\n", strlen(str1));

    // 2. strcpy
    strcpy(str3, str1);
    printf("After copy: %s\n", str3);

    // 3. strcat
    strcat(str1, str2);
    printf("After concat: %s\n", str1);

    // 4. strcmp
    int result = strcmp(str1, str2);
    printf("Compare: %d\n", result);

    return 0;
}