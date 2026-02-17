#include <stdio.h>
#include <string.h>

//count vowels
int countVowels(char str[]) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];


        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }

    return count;
}

int main() {
    char word[100];
    int result;

    printf("Enter a word: ");
    scanf("%s", word); 

    result = countVowels(word);

    printf("Number of vowels: %d\n", result);

    return 0;
}
