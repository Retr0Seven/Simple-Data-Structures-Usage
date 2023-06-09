#include <stdio.h>

typedef struct {
    char title[100];
    char author[100];
    int publicationYear;
} Book;

int main() {
    Book book;
    
    // Prompt the user to enter the book title
    printf("Enter book title: ");
    scanf("99[^\n]%*c", book.title);

    // Prompt the user to enter the author name
    printf("Enter author name: ");
    scanf("99[^\n]%*c", book.author);

    // Prompt the user to enter the publication year
    printf("Enter publication year: ");
    scanf("%d", &book.publicationYear);

    // Display the book details
    printf("\nBook Details:\n");
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Publication Year: %d\n", book.publicationYear);

    return 0;
}
