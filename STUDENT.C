#include<conio.h>
#include<string.h>

struct Student {
    int rollNumber;
    char name[50];
    float result;
};

void sortStudentsByResult(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].result > students[j + 1].result) {

                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {

    struct Student students[10];

    // Input data for each student
    for (int i = 0; i < 10; i++) {
        printf("Enter details for student %d\n", i + 1);
        
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        
        printf("Name: ");
        scanf("%s", students[i].name);  // Note: this won't handle spaces in names
        
        printf("Result: ");
        scanf("%f", &students[i].result);
        
        printf("\n");
    }

    // Sort the students by their result
    sortStudentsByResult(students, 10);

    // Display the data for each student
    printf("Details of 10 students (sorted by result):\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Result: %.2f\n", students[i].result);
        printf("\n");
    }

    return 0;
}