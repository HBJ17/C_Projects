#include <stdio.h>

#define MAX 10

//read matrix
int readMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    return 0;
}

//display matrix
int displayMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//matrix addition
int addMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
    return 0;
}

//matrix multiplication
int multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return 0;
}

//matrix transpose
int transposeMatrix(int matrix[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
    return 0;
}


int main() {
    int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];
    int r1, c1, r2, c2;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    printf("\nEnter elements of Matrix A:\n");
    readMatrix(A, r1, c1);

    printf("\nEnter elements of Matrix B:\n");
    readMatrix(B, r2, c2);

    // Matrix Addition
    if (r1 == r2 && c1 == c2) {
        addMatrices(A, B, result, r1, c1);
        printf("\nMatrix Addition Result:\n");
        displayMatrix(result, r1, c1);
    } else {
        printf("\nMatrix addition not possible.\n");
    }

    // Matrix Multiplication
    if (c1 == r2) {
        multiplyMatrices(A, B, result, r1, c1, c2);
        printf("\nMatrix multiplication result:\n");
        displayMatrix(result, r1, c2);
    } else {
        printf("\nMatrix multiplication not possible.\n");
    }

    // Transpose of Matrix 
    transposeMatrix(A, result, r1, c1);
    printf("\nTranspose of Matrix A:\n");
    displayMatrix(result, c1, r1);

    return 0;
}

