#include <stdio.h>

// User defined functions
void jog(float x, float y) {
    printf("Jogfol: %.2f\n", x + y);
}

void biyog(float x, float y) {
    printf("Biyogfol: %.2f\n", x - y);
}

void gun(float x, float y) {
    printf("Gunfol: %.2f\n", x * y);
}

void bhag(float x, float y) {
    if(y == 0) {
        printf("Error! Zero diye bhag kora jay na.\n");
    } else {
        printf("Bhagfol: %.2f\n", x / y);
    }
}

int main() {
    float a, b;
    int choice;

    printf("Duiti sonkha likho: ");
    scanf("%f %f", &a, &b);

    printf("\nKi korte chao?\n1. Jog\n2. Biyog\n3. Gun\n4. Bhag\n");
    printf("Tomar choice (1-4): ");
    scanf("%d", &choice);

    if (choice == 1) jog(a, b);
    else if (choice == 2) biyog(a, b);
    else if (choice == 3) gun(a, b);
    else if (choice == 4) bhag(a, b);
    else printf("Bhul choice diyeco!");

    return 0;
}
