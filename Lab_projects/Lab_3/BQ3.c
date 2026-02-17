#include <stdio.h>

int main() {
    int s[9][9],i,j,k,valid=1;

    printf("Enter Sudoku:\n");
    for(i=0;i<9;i++)
        for(j=0;j<9;j++)
            scanf("%d",&s[i][j]);

    for(i=0;i<9;i++)
        for(j=0;j<9;j++)
            for(k=j+1;k<9;k++)
                if(s[i][j]==s[i][k] && s[i][j]!=0)
                    valid=0;

    if(valid)
        printf("Valid Sudoku");
    else
        printf("Invalid Sudoku");

    return 0;
}
