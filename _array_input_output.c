1._array_input_output.c

#include <stdio.h>

int main() {
    int n, i;

    // Ask user for array size
    printf("Enter size of array: ");
    scanf("%d", &n);

    int array[n];

    // Take array elements as input
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Print array elements
    printf("Array elements are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
