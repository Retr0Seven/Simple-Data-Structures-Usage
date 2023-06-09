#include <stdio.h>

typedef struct {
    char name[20];
    int ID;
    float GPA;
} students;

int main() {
    students student;
    
    // Prompt the user to enter the name of the student
    printf("Enter the name of the student: ");
    scanf("%s", student.name);
    
    // Prompt the user to enter the ID of the student
    printf("Enter the ID of the student: ");
    scanf("%d", &student.ID);
    
    // Prompt the user to enter the GPA of the student
    printf("Enter the GPA of the student: ");
    scanf("%f", &student.GPA);
    
    // Display the entered information about the student
    printf("Student %s, ID: %d, has GPA: %.2f", student.name, student.ID, student.GPA);
    
    return 0;
}
