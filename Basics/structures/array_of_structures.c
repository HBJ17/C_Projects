#include <stdio.h>

int main() {
    int i;

    struct student {
        char name[50];
        int age;
        char city[50];
    };

    struct student s[3];

    for(i=0;i<3;i++) {
        printf("Enter Name = ");
        fgets(s[i].name,sizeof(s[i].name),stdin);

        printf("Enter age = ");
        scanf("%d",&s[i].age);
        getchar();

        printf("Enter City = ");
        fgets(s[i].city,sizeof(s[i].city),stdin);
    }

    for(i=0;i<3;i++) {
        printf("Name = %s",s[i].name);

        printf("Age = %d",s[i].age);

        printf("City = %s",s[i].city);
    }

    return 0;
}