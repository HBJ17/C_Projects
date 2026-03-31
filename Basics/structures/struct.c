#include <stdio.h>

int main() {
    struct student {
        char name[50];
        int age;
        char city[50];
    };

    struct student s1;

    printf("Enter student name = ");
    fgets(s1.name,sizeof(s1.name),stdin);

    printf("Enter age = ");
    scanf("%d",&s1.age);
    getchar();

    printf("Enter city name = ");
    fgets(s1.city,sizeof(s1.city),stdin);

    printf("\nStudent Details\n");
    printf("Name = %s",s1.name);
    printf("Age = %d\n",s1.age);
    printf("City = %s",s1.city);

    return 0;
}