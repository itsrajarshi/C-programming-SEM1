#include <stdio.h>

struct employee {
    int id;
    char name[15];
    float salary;
} emp[3];

int main() {
    int i;
    printf("Enter ID, Name, and Salary of 3 employees:\n");

    for(i = 0; i < 3; i++) {
        printf("Employee %d:\n", i + 1);
        scanf("%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);
    }

    printf("\nEmployee Details:\n");
    for(i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }

    return 0;
}