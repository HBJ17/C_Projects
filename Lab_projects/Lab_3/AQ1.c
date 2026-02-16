#include <stdio.h>

#define ROWS 3
#define COLS 5

int countEvenOdd(int matrix[ROWS][COLS]) {
    int even = 0, odd = 0;

    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            if(matrix[i][j] % 2 == 0)
                even++;
            else
                odd++;
        }
    }

    printf("\nNumber of Even elements: %d", even);
    printf("\nNumber of Odd elements: %d\n", odd);

    return 0;
}

int main() {
    int matrix[ROWS][COLS];

    printf("Enter elements of 3x5 matrix:\n");
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    countEvenOdd(matrix);

    return 0;
}
