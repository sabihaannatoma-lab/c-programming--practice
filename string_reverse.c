#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, j = 0;

    printf("Enter a string: ");
    gets(str); // User input nibe

    i = 0;
    j = strlen(str) - 1;

    // Logic to swap characters from start and end
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Reverse string is: %s", str);
    return 0;
}
