#include <stdio.h>

int mystrlen(char s[]) {
    int i=0;
    while(s[i]!='\0') i++;
    return i;
}

void mystrcpy(char d[], char s[]) {
    int i=0;
    while(s[i]!='\0') {
        d[i]=s[i];
        i++;
    }
    d[i]='\0';
}

void mystrcat(char d[], char s[]) {
    int i=mystrlen(d),j=0;
    while(s[j]!='\0') {
        d[i++]=s[j++];
    }
    d[i]='\0';
}

int mystrcmp(char a[], char b[]) {
    int i=0;
    while(a[i]==b[i] && a[i]!='\0') i++;
    return a[i]-b[i];
}

int main() {
    char a[100]="Hello", b[100]="World", c[100];

    printf("Length = %d\n",mystrlen(a));
    mystrcpy(c,a);
    printf("Copy = %s\n",c);
    mystrcat(a,b);
    printf("Concat = %s\n",a);
    printf("Compare = %d\n",mystrcmp(a,b));
    return 0;
}
