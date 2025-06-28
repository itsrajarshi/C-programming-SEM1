#include <stdio.h>
#include <string.h>

void reverse(char x[]) {
    int i = 0;
    int j = strlen(x) - 1;

    while (i < j) {
        char temp = x[i];
        x[i] = x[j];
        x[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str[] = "suiiiiiiiiiiiiiiiii";
    printf("Original string: %s\n", str);
    reverse(str);
    printf("Reversed string: %s\n", str);
    return 0;
}