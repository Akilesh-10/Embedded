#include <stdio.h>

int main() {
    int number, ones;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);
    ones = number % 10;
    printf("One's digit: %d\n", ones);
    return 0;
}
