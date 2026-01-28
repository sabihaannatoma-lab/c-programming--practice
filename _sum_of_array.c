02_sum_of_array.c

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i]; // Add element to sum
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}