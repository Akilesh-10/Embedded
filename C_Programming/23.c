#include <stdio.h>

int main() {
    int number, d1, d2, result;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    d1 = number / 10;
    d2 = number % 10;
    result = number - 5 * ((d1 + d2) % 2);
    printf("Result: %d\n", result);
    return 0;
}
