#include <stdio.h>

void wps(char x[]) {
    int i = 0, count = 0;

    while (x[i] != '\0') {
        if (x[i] == ' ' && x[i+1] != ' ' && x[i+1] != '\0') {
            count++;
        }
        i++;
    }

    printf("Number of Words = %d", count + 1);
}

int main() {
    char sentence[100];

    printf("Enter your sentence = ");
    fgets(sentence, 100, stdin);

    wps(sentence);

    return 0;
}
