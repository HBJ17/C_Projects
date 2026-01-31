#include <stdio.h>

int main() {
    char p[5];
    int attempts = 0;

    while (attempts < 3) {
        printf("Enter password: ");
        scanf("%s", p);

        if (p[0]=='C' && p[1]=='1' && p[2]=='2' && p[3]=='3') {
            printf("Welcome");
            return 0;
        }

        attempts++;
        printf("Wrong password\n");
    }

    printf("Account locked");
    return 0;
}
