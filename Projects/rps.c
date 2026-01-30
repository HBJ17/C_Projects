#include <stdio.h>

int main() {
    int user, comp;
    int uwin = 0, cwin = 0, tie = 0;

    while (1) {
        printf("\n0 Rock  1 Paper  2 Scissor  3 Exit\n");
        scanf("%d", &user);

        if (user == 3)
            break;

        comp = (user + 1) % 3;

        printf("You: %d\n", user);
        printf("Computer: %d\n", comp);

        if (user == comp) {
            printf("Tie\n");
            tie++;
        }
        else if ((user == 0 && comp == 2) || (user == 1 && comp == 0) || (user == 2 && comp == 1)) {
            printf("You win\n");
            uwin++;
        }
        else {
            printf("Computer wins\n");
            cwin++;
        }

        printf("Score -> You: %d  Computer: %d  Tie: %d\n", uwin, cwin, tie);
    }

    return 0;
}
