#include <stdio.h>

int main() {
    char name[100];  // Declare a character array to hold the name

    printf("Enter your name:\n");
    fgets(name, sizeof(name), stdin);  // Read a line of input (safe way)
    
    printf("You entered: ");
    puts(name);  // Display the input

    return 0;
}