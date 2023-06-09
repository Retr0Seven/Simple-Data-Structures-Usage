#include <stdio.h>

typedef struct {
    char name[50];
    float price;
    int quantity;
} Product;

int main() {
    int numProducts;
    
    // Prompt the user to enter the number of products
    printf("Enter the number of products: ");
    scanf("%d", &numProducts);
    
    // Declare an array of Product structures to store the product details
    Product products[numProducts];
    
    // Loop to input details for each product
    for (int i = 0; i < numProducts; i++) {
        printf("\nEnter details for product %d:\n", i + 1);
        
        // Prompt the user to enter the product name
        printf("Enter product name: ");
        scanf("%s", products[i].name);
        
        // Prompt the user to enter the product price
        printf("Enter product price: ");
        scanf("%f", &products[i].price);
        
        // Prompt the user to enter the product quantity
        printf("Enter product quantity: ");
        scanf("%d", &products[i].quantity);
    }
    
    // Display the product inventory
    printf("\nProduct Inventory:\n");
    for (int i = 0; i < numProducts; i++) {
        printf("Product %d\n", i + 1);
        
        // Print the product name
        printf("Name: %s\n", products[i].name);
        
        // Print the product price
        printf("Price: %.2f\n", products[i].price);
        
        // Print the product quantity
        printf("Quantity: %d\n", products[i].quantity);
        
        printf("\n");
    }
    
    return 0;
}
