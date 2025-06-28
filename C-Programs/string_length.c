#include <stdio.h>

int main() {
    #define SIZE 20
    char x[SIZE] = "SYAM";
    int i = 0, count = 0;

    while (x[i] != '\0') {
        count++;
        i++;
    }

    printf("The length of the array is %d\n", count);
    return 0;
}