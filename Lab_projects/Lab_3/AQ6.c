#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int length = strlen(str);

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;   
        }
    }
    return 1;   
}

int main() {
    char str[100];

    printf("Enter a word: ");
    scanf("%s", str);

    if (isPalindrome(str))
        printf("It is a Palindrome.\n");
    else
        printf("It is NOT a Palindrome.\n");

    return 0;
}
