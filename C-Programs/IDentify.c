#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[10];
};

// Function declaration
void show(struct student s2);

int main() {
    struct student s1;
    s1.roll = 111;
    strcpy(s1.name, "akhil");
    show(s1);
    return 0;
}

// Function definition
void show(struct student s2) {
    printf("Roll: %d\n", s2.roll);
    printf("Name: %s\n", s2.name);
}