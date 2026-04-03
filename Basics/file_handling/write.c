#include <stdio.h>

int main() {
    FILE *fp;

    fp=fopen("D:\\Studies\\Projects\\C\\Basics\\file_handling\\write.txt", "w");

    if(fp == NULL) {
        printf("Error Opening File\n");
        return 1;
    }

    fprintf(fp,"hello World\n");
    fprintf(fp,"Welcome to C programming\n");

    fclose(fp);
    return 0;
}