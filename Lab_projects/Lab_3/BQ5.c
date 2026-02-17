#include <stdio.h>

int main() {
    char books[5][50];
    char temp[50];
    int i,j,k;

    printf("Enter 5 book titles:\n");
    for(i=0;i<5;i++)
        fgets(books[i],50,stdin);

    for(i=0;i<4;i++)
        for(j=i+1;j<5;j++)
            if(books[i][0] > books[j][0]) {
                for(k=0;k<50;k++)
                    temp[k]=books[i][k];
                for(k=0;k<50;k++)
                    books[i][k]=books[j][k];
                for(k=0;k<50;k++)
                    books[j][k]=temp[k];
            }

    printf("Sorted Titles:\n");
    for(i=0;i<5;i++)
        printf("%s",books[i]);

    return 0;
}
