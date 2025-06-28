#include <stdio.h>

struct student {             // Structure tag: student
    int roll_number;         // 4 bytes
    char name[10];           // 10 bytes
    float CGPA;              // 4 bytes
}; // Total = 18 bytes (may vary due to padding)

int main() {
    struct student one;      // Declaring a variable of struct student

    // You can now assign values like:
    // one.roll_number = 101;
    // strcpy(one.name, "Rohit");
    // one.CGPA = 8.6;

    return 0;
}