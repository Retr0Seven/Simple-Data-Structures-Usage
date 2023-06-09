#include <stdio.h>

typedef struct rectangle {
    float length;
    float width;
} rectangle;

float area;

int main() {
    rectangle rectangle;
    
    // Prompt the user to enter the length of the rectangle
    printf("Enter length of rectangle: ");
    scanf("%f", &rectangle.length);

    // Prompt the user to enter the width of the rectangle
    printf("Enter width of rectangle: ");
    scanf("%f", &rectangle.width);

    // Calculate the area of the rectangle
    area = rectangle.length * rectangle.width;

    // Display the calculated area of the rectangle
    printf("Area of rectangle: %.2f\n", area);

    return 0;
}
