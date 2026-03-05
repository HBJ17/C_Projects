#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    int i;
    printf("Enter the number of grades = ");
    scanf("%d",&number);


    char *grades = calloc(number ,sizeof(char));

    if (grades == NULL) {
        printf("Memory Allocation failed!\n");
        return 1;
    }

    for(i=0;i<number;i++) {
        printf("Enter grade %d = ",i+1);
        scanf(" %c",&grades[i]);
    }

    for(i=0;i<number;i++) {
        printf("%c",grades[i]);
    }

    free(grades);
    grades=NULL;

    return 0;

}