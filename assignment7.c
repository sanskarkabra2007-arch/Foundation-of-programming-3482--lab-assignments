#include <stdio.h>
struct Student {
    int roll_no;
    char name[50];
    int marks[3];
    int total_marks;
    float percentage;
};
int main() {
    int num_students;
    struct Student students[100];
    printf("Enter number of students: ");
    scanf("%d", &num_students);
    for (int i = 0; i < num_students; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks in 3 subjects : ");
        for (int j = 0; j < 3; j++) {
            scanf("%d", &students[i].marks[j]);
        }
    }
    for (int i = 0; i < num_students; i++) {
        students[i].total_marks = 0;
        for (int j = 0; j < 3; j++) {
            students[i].total_marks += students[i].marks[j];
        }
        students[i].percentage = (float)students[i].total_marks / 300.0 * 100.0;
    }
    printf("\n--- Student Results ---\n");
    for (int i = 0; i < num_students; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Total Marks: %d\n", students[i].total_marks);
        printf("Percentage: %.2f%%\n", students[i].percentage);
    }
    return 0;
}
