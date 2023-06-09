#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

// Function to check if a year is a leap year
int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return 1;
            else
                return 0;
        } else
            return 1;
    } else
        return 0;
}

// Function to check if a date is valid
int isValidDate(Date date) {
    // Check for invalid values in year, month, and day
    if (date.year < 0 || date.month < 1 || date.month > 12 || date.day < 1)
        return 0;

    // Array to store the number of days in each month
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Modify daysInMonth for a leap year
    if (isLeapYear(date.year))
        daysInMonth[1] = 29;

    // Check if the day is valid for the given month
    if (date.day > daysInMonth[date.month - 1])
        return 0;

    return 1;
}

int main() {
    Date date;

    // Prompt the user to enter a date in the format (day month year)
    printf("Enter date (day month year): ");
    scanf("%d %d %d", &date.day, &date.month, &date.year);

    // Check if the entered date is valid
    if (isValidDate(date))
        printf("Valid date.\n");
    else
        printf("Invalid date.\n");

    return 0;
}
