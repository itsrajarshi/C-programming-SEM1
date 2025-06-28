#include <stdio.h>

int main(void) {
    int a[2][2] = { {1, 2}, {3, 4} };
    int b[2][2] = { {3, 4}, {1, 2} };
    int c[2][2];
    int i, j;

    printf("Performing custom operation on 2x2 matrices...\n");

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            c[i][j] = a[i][j] * b[j][i];
        }
    }

    printf("Resultant Matrix C:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}