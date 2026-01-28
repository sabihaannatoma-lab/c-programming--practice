05_min_element.c

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int min = array[0]; // Assume first element is min
    for(i = 1; i < n; i++) {
        if(array[i] < min) {
            min = array[i];
        }
    }

    printf("Minimum element is: %d\n", min);

    return 0;
}

