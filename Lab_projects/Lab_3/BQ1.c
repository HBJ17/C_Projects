#include <stdio.h>

void display(int seat[10][10]) {
    int i,j;
    for(i=0;i<10;i++) {
        for(j=0;j<10;j++)
            printf("%d ",seat[i][j]);
        printf("\n");
    }
}

int main() {
    int seat[10][10]={0};
    int row,col;

    printf("Before booking:\n");
    display(seat);

    printf("Enter row and column to book (0-9): ");
    scanf("%d%d",&row,&col);

    if(seat[row][col]==0) {
        seat[row][col]=1;
        printf("Booked!\n");
    } else
        printf("Already booked!\n");

    printf("After booking:\n");
    display(seat);
    return 0;
}
