#include <stdio.h>

int main() {
    int marks;
    printf("Enter the student's marks: ");
    scanf("%d", &marks);

    if (marks >= 40) {
        printf("PASS");
    } else {
        printf("FAIL");
    }
    return 0;
}

// This program checks if a student has passed or failed based on their marks.
// If the marks are 40 or above, it prints "PASS"; otherwise
// it prints "FAIL". The program uses a simple conditional statement to determine the result.
// It prompts the user to enter the marks, reads the input, and evaluates the condition.
// The program is straightforward and serves as a basic example of using conditional statements in C.