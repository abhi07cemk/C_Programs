#include <stdio.h>

#define SIZE 10

// Define the student structure
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[SIZE];
    float totalMarks = 0.0, average;

    // Input student details
    for (int i = 0; i < SIZE; i++) {
        printf("Enter details for student %d:\n", i + 1);
        
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);  // Read string with spaces

        printf("Roll Number: ");
        scanf("%d", &students[i].roll);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        totalMarks += students[i].marks;
    }

    // Calculate average
    average = totalMarks / SIZE;

    // Print student details
    printf("\nStudent Records:\n");
    printf("-------------------------------------------------\n");
    printf("Name\t\tRoll\tMarks\n");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%-15s %d\t%.2f\n", students[i].name, students[i].roll, students[i].marks);
    }

    // Print average
    printf("-------------------------------------------------\n");
    printf("Average Marks: %.2f\n", average);

    return 0;
}
