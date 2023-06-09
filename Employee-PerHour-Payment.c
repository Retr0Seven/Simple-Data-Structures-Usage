#include <stdio.h>

typedef struct {
    char name[50];
    float hoursWorked;
    float hourlyRate;
} Employee;

Employee employee;

// Function to calculate the total pay for the employee
float calculatePay() {
    return employee.hoursWorked * employee.hourlyRate;
}

int main() {
    // Prompt the user to enter the employee name
    printf("Enter employee name: ");
    scanf("%s", employee.name);

    // Prompt the user to enter the hours worked
    printf("Enter hours worked: ");
    scanf("%f", &employee.hoursWorked);

    // Prompt the user to enter the hourly rate
    printf("Enter hourly rate: ");
    scanf("%f", &employee.hourlyRate);

    // Calculate the total pay by calling the calculatePay function
    float totalPay = calculatePay();

    // Display the employee name and total pay
    printf("Employee: %s\n", employee.name);
    printf("Total Pay: %.2f\n", totalPay);

    return 0;
}
