//write a c program using scanf to read and print the values of an array
#include <stdio.h>

int main() {
    int array[100], n, i;

    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Elements in array are: \n");
    for(i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
