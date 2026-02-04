#include <stdio.h>

int main() {
    int arr[5], i;
    int max1, max2;

    printf("--- Diamond Student Logic: Second Largest Number ---\n");
    printf("Enter 5 numbers: \n");

    // Input loop
    for(i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Initialize champion and runner-up
    max1 = max2 = -2147483648; 

    for(i = 0; i < 5; i++) {
        if(arr[i] > max1) {
            max2 = max1; // Purano champion ekhon runner-up
            max1 = arr[i]; // Notun champion
        }
        else if(arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i]; // Sudhu runner-up update
        }
    }

    printf("\n>>> The Second Largest Number is: %d\n", max2);
    printf("----------------------------------------------\n");

    return 0;
}