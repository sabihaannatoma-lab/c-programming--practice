04_max_element.c

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

    int max = array[0]; // Assume first element is max
    for(i = 1; i < n; i++) {
        if(array[i] > max) {
            max = array[i];
        }
    }

    printf("Maximum element is: %d\n", max);

    return 0;
}