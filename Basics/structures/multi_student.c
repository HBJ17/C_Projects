#include <stdio.h>
#include <string.h>

#define MAX 100

struct student {
    char name[50];
    int age;
    char city[50];
};

int main() {
    struct student s[MAX];
    int count = 0, choice;

    while (1) {
        printf("\n    Student Management System    \n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search by Name\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar(); // clear buffer

        if (choice == 1) {
            if (count >= MAX) {
                printf("Storage Full!\n");
                continue;
            }

            printf("Enter name: ");
            fgets(s[count].name, sizeof(s[count].name), stdin);

            printf("Enter age: ");
            scanf("%d", &s[count].age);
            getchar();

            printf("Enter city: ");
            fgets(s[count].city, sizeof(s[count].city), stdin);

            count++;
            printf("Student added successfully!\n");
        }

        else if (choice == 2) {
            if (count == 0) {
                printf("No students found.\n");
                continue;
            }

            printf("\n    Student List    \n");
            for (int i = 0; i < count; i++) {
                printf("\nStudent %d\n", i + 1);
                printf("Name = %s", s[i].name);
                printf("Age = %d\n", s[i].age);
                printf("City = %s", s[i].city);
            }
        }

        else if (choice == 3) {
            char search[50];
            int found = 0;

            printf("Enter name to search: ");
            fgets(search, sizeof(search), stdin);

            for (int i = 0; i < count; i++) {
                if (strcmp(s[i].name, search) == 0) {
                    printf("\nStudent Found!\n");
                    printf("Name = %s", s[i].name);
                    printf("Age = %d\n", s[i].age);
                    printf("City = %s", s[i].city);
                    found = 1;
                }
            }

            if (!found) {
                printf("Student not found.\n");
            }
        }

        else if (choice == 4) {
            printf("Exiting...\n");
            break;
        }

        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}