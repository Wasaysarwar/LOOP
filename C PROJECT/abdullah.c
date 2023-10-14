#include <stdio.h>
#include <stdlib.h>

#define TUITION_FEE 5000
#define EXAM_FEE 1000
#define ACTIVITY_FEE 500

typedef struct {
    char name[50];
    int rollNumber;
    int tuitionFeePaid;
    int examFeePaid;
    int activityFeePaid;
    int totalFeePaid;
} Student;

void displayMenu() {
    printf("\n===== School Billing System =====\n");
    printf("1. Add Student\n");
    printf("2. Display Student Information\n");
    printf("3. Update Fee Payment\n");
    printf("4. Exit\n");
    printf("=================================\n");
    printf("Enter your choice: ");
}

void addStudent(Student *students, int *count) {
    printf("\n=== Add Student ===\n");

    printf("Enter student name: ");
    scanf("%s", students[*count].name);

    printf("Enter student roll number: ");
    scanf("%d", &students[*count].rollNumber);

    students[*count].tuitionFeePaid = 0;
    students[*count].examFeePaid = 0;
    students[*count].activityFeePaid = 0;
    students[*count].totalFeePaid = 0;

    (*count)++;
    printf("Student added successfully!\n");
}

void displayStudentInfo(Student *students, int count) {
    printf("\n=== Display Student Information ===\n");

    int rollNumber;
    printf("Enter student roll number: ");
    scanf("%d", &rollNumber);

    int i;
    for (i = 0; i < count; i++) {
        if (students[i].rollNumber == rollNumber) {
            printf("Name: %s\n", students[i].name);
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Tuition Fee Paid: %d\n", students[i].tuitionFeePaid);
            printf("Exam Fee Paid: %d\n", students[i].examFeePaid);
            printf("Activity Fee Paid: %d\n", students[i].activityFeePaid);
            printf("Total Fee Paid: %d\n", students[i].totalFeePaid);
            return;
        }
    }

    printf("Student not found!\n");
}

void updateFeePayment(Student *students, int count) {
    printf("\n=== Update Fee Payment ===\n");

    int rollNumber;
    printf("Enter student roll number: ");
    scanf("%d", &rollNumber);

    int i;
    for (i = 0; i < count; i++) {
        if (students[i].rollNumber == rollNumber) {
            int choice;
            printf("1. Pay Tuition Fee\n");
            printf("2. Pay Exam Fee\n");
            printf("3. Pay Activity Fee\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            int amount;
            printf("Enter the amount: ");
            scanf("%d", &amount);

            switch (choice) {
                case 1:
                    students[i].tuitionFeePaid += amount;
                    students[i].totalFeePaid += amount;
                    break;
                case 2:
                    students[i].examFeePaid += amount;
                    students[i].totalFeePaid += amount;
                    break;
                case 3:
                    students[i].activityFeePaid += amount;
                    students[i].totalFeePaid += amount;
                    break;
                default:
                    printf("Invalid choice!\n");
                    return;
            }

            printf("Fee payment updated successfully!\n");
            return;
        }
    }

    printf("Student not found!\n");
}

int main() {
    int choice;
    Student students[100];
    int count = 0;

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudentInfo(students, count);
                break;
            case 3:
                updateFeePayment(students, count);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while (choice != 4);

    return 0;
}