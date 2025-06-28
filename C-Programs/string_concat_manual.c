#include <stdio.h>
#include <string.h>

int main() {
    char s1[50] = "Hello";
    char s2[] = "World";
    int l1 = strlen(s1);
    int l2 = strlen(s2);

    for (int i = 0; i <= l2; i++) {
        s1[l1 + i] = s2[i];
    }

    printf("Concatenated String: %s\n", s1);
    return 0;
}