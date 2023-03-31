#include <stdio.h>
#include <string.h>

// Define structure of student
struct student {
    int roll_no;
    char stud_name[50];
    float mark1, mark2, mark3, total_marks, avg_marks;
};

int main() {
    int n, i, j;
    struct student s[50], temp;

    // Read the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Read the details of each student
    for (i = 0; i < n; i++) {
        printf("\nEnter the details of student %d:\n", i+1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);
        printf("Student Name: ");
        scanf("%s", &s[i].stud_name);
        printf("Mark 1: ");
        scanf("%f", &s[i].mark1);
        printf("Mark 2: ");
        scanf("%f", &s[i].mark2);
        printf("Mark 3: ");
        scanf("%f", &s[i].mark3);

        // Calculate the total marks and average marks
        s[i].total_marks = s[i].mark1 + s[i].mark2 + s[i].mark3;
        s[i].avg_marks = s[i].total_marks / 3.0;
    }

    // Sort the records in descending order of marks using bubble sort
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (s[j].total_marks < s[j+1].total_marks) {
                // Swap the records
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    // Display the sorted records
    printf("\n\nRoll No\tName\t\tTotal Marks\tAverage Marks\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\t\t%.2f\n", s[i].roll_no, s[i].stud_name, s[i].total_marks, s[i].avg_marks);
    }

    return 0;
}

