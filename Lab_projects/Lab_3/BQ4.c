#include <stdio.h>

int main() {
    char str[200];
    int i=0;

    printf("Enter sentence: ");
    fgets(str,200,stdin);

    while(str[i]!='\0') {
        if(str[i]=='b'&&str[i+1]=='a'&&str[i+2]=='d') {
            str[i]='@';
            str[i+1]='@';
            str[i+2]='@';
        }
        i++;
    }

    printf("Filtered: %s",str);
    return 0;
}
