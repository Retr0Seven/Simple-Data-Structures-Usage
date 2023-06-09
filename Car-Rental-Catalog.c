#include <stdio.h>

typedef struct {
    char brand[50];
    char model[50];
    int year;
} Car;

int main() {
    int numCars;
    
    // Prompt the user to enter the number of cars
    printf("Enter the number of cars: ");
    scanf("%d", &numCars);
    
    // Create an array of Car structures based on the user input
    Car cars[numCars];
    
    // Gather details for each car from the user
    for (int i = 0; i < numCars; i++) {
        printf("\nEnter details for car: %d\n", i + 1);
        
        // Prompt the user to enter the brand of the car
        printf("Enter car brand: ");
        scanf("%s", cars[i].brand);
        
        // Prompt the user to enter the model of the car
        printf("Enter car model: ");
        scanf("%s", cars[i].model);
        
        // Prompt the user to enter the year of the car
        printf("Enter car year: ");
        scanf("%d", &cars[i].year);
    }
    
    // Display the car rental system
    printf("\nCar Rental System:\n");
    for (int i = 0; i < numCars; i++) {
        printf("Car %d\n", i + 1);
        
        // Print the brand of the car
        printf("Brand: %s\n", cars[i].brand);
        
        // Print the model of the car
        printf("Model: %s\n", cars[i].model);
        
        // Print the year of the car
        printf("Year: %d\n", cars[i].year);
        
        printf("\n");
    }
    
    return 0;
}
