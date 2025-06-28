#include <stdio.h>
#include <ctype.h>

int main() {
    char a[] = "Gitam";
    for (int i = 0; a[i] != '\0'; i++) {
        a[i] = tolower(a[i]);
    }
    printf("%s\n", a);
    return 0;
}