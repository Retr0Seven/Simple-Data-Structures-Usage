#include <stdio.h>

typedef struct Employee {
    char name[50];
    int id;
    float salary;
} Employee;

int main() {
    int numEmployees;

    // Prompt the user to enter the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    // Declare an array of Employee structures with size numEmployees
    Employee employees[numEmployees];

    // Loop to input details for each employee
    for (int i = 0; i < numEmployees; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);

        // Prompt the user to enter the employee name
        printf("Enter employee name: ");
        scanf("%s", employees[i].name);

        // Prompt the user to enter the employee ID
        printf("Enter employee ID: ");
        scanf("%d", &employees[i].id);

        // Prompt the user to enter the employee salary
        printf("Enter employee salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Display the employee records
    printf("\nEmployee Records:\n");

    // Loop to print the details of each employee
    for (int i = 0; i < numEmployees; i++) {
        printf("Employee %d\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("ID: %d\n", employees[i].id);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("\n");
    }

    return 0;
}
