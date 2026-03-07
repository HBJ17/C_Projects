#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
    char grade;
};

char calculateGrade(float marks) {
    if (marks >= 90)
        return 'A';
    else if (marks >= 80)
        return 'B';
    else if (marks >= 70)
        return 'C';
    else if (marks >= 60)
        return 'D';
    else
        return 'F';
}


void displayStudents(struct Student *s, int n) {
	int i;
    printf("\nStudent Records:\n");
    for (i = 0; i < n; i++) {
        printf("\nRoll No: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
        printf("Grade: %c\n", s[i].grade);
    }
}

void updateMarks(struct Student *s, int n) {
	int i;
    int roll;
    printf("\nEnter roll number to update marks: ");
    scanf("%d", &roll);

    for (i = 0; i < n; i++) {
        if (s[i].roll == roll) {
            printf("Enter new marks: ");
            scanf("%f", &s[i].marks);

            s[i].grade = calculateGrade(s[i].marks);

            printf("Marks and grade updated successfully!\n");
            return;
        }
    }

    printf("Student not found!\n");
}

int main() {
	int i;
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student *students;
    students = (struct Student *)malloc(n * sizeof(struct Student));

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &students[i].roll);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        students[i].grade = calculateGrade(students[i].marks);
    }

    displayStudents(students, n);

    updateMarks(students, n);

    displayStudents(students, n);

    free(students);

    return 0;
}

