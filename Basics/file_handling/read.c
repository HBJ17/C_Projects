#include <stdio.h>

int main() {
    FILE *fp;
    int x;

    fp = fopen("D:\\Studies\\Projects\\C\\Basics\\file_handling\\read.txt", "r");  // open file in read mode

    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Read until EOF
    while (fscanf(fp, "%d", &x) == 1) {
        printf("%d ", x);
    }

    fclose(fp);  // close file
    return 0;
}