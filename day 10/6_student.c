#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100


struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int n, i;
    char searchName[50];
    int found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("\nEnter the name of the student to search: ");
    scanf("%s", searchName);

    for (i = 0; i < n; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("\n--- Student Found ---\n");
            printf("Name: %s\n", students[i].name);
            printf("Roll Number: %d\n", students[i].rollNo);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
            break; 
        }
    }

    if (!found) {
        printf("\nStudent with name '%s' not found.\n", searchName);
    }

    return 0;
}