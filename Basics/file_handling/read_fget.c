#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];
    int c = 0;

    fp = fopen("D:\\Studies\\Projects\\C\\Basics\\file_handling\\read.txt","r");

    if(fp == NULL) {
        printf("Error Opening File\n");
        return 1;
    }

    while(fgets(line, sizeof(line),fp) != NULL) {
        printf("%s",line);
        c = c + 1;
    }

    printf("\nNumber of lines: %d\n", c);
    fclose(fp);
    return 0;
}