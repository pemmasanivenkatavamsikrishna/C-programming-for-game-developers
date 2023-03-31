#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    int year;
    int pages;
};

int count = 0;
struct Book library[100];

void addBook() {
    struct Book newBook;
    printf("Enter title: ");
    scanf("%s", newBook.title);
    printf("Enter author: ");
    scanf("%s", newBook.author);
    printf("Enter year: ");
    scanf("%d", &newBook.year);
    printf("Enter pages: ");
    scanf("%d", &newBook.pages);
    library[count++] = newBook;
    printf("Book added successfully.\n");
}

void displayBooks() {
    printf("Title\tAuthor\tYear\tPages\n");
    for (int i = 0; i < count; i++) {
        printf("%s\t%s\t%d\t%d\n", library[i].title, library[i].author, library[i].year, library[i].pages);
    }
}

void listBooksByAuthor() {
    char author[50];
    printf("Enter author name: ");
    scanf("%s", author);
    printf("Books by %s:\n", author);
    for (int i = 0; i < count; i++) {
        if (strcmp(library[i].author, author) == 0) {
            printf("%s\n", library[i].title);
        }
    }
}

void listBookCount() {
    printf("Number of books in library: %d\n", count);
}

int main() {
    int choice;
    do {
        printf("Library Menu\n");
        printf("1. Add book details\n");
        printf("2. Display book details\n");
        printf("3. List all books of given author\n");
        printf("4. List the count of books in the library\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                listBooksByAuthor();
                break;
            case 4:
                listBookCount();
                break;
            case 5:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);
    return 0;
}

