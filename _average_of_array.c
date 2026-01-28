03_average_of_array.c


#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    avg = sum / n; // Calculate average
    printf("Average of array elements: %.2f\n", avg);

    return 0;
}