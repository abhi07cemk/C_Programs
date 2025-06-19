#include <stdio.h>

// Define a structure to store student information
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[10];  // Array to store information of 10 students
    float totalMarks = 0;
    float averageMarks;

    // Taking input for 10 students
    for (int i = 0; i < 10; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        getchar();  // To consume any leftover newline character
        fgets(students[i].name, sizeof(students[i].name), stdin);
        
        // Remove newline character from fgets input
        for (int j = 0; students[i].name[j] != '\0'; j++) {
            if (students[i].name[j] == '\n') {
                students[i].name[j] = '\0';
                break;
            }
        }

        printf("Roll number: ");
        scanf("%d", &students[i].roll);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);

        totalMarks += students[i].marks;
    }

    // Calculating average marks
    averageMarks = totalMarks / 10;

    // Printing the records and average marks
    printf("\nStudent Records:\n");
    printf("--------------------------------------------------------\n");
    printf("Name\t\tRoll Number\tMarks\n");
    printf("--------------------------------------------------------\n");
    for (int i = 0; i < 10; i++) {
        printf("%s\t\t%d\t\t%.2f\n", students[i].name, students[i].roll, students[i].marks);
    }
    printf("--------------------------------------------------------\n");

    // Displaying the average marks
    printf("\nAverage Marks of all students: %.2f\n", averageMarks);

    return 0;
}
