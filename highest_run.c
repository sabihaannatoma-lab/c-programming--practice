#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter runs of 3 players: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("Highest run: %d\n", a);
    else if (b > a && b > c)
        printf("Highest run: %d\n", b);
    else
        printf("Highest run: %d\n", c);

    return 0;
}
