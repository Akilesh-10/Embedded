#include <stdio.h>

int main() {
    int number, d2, d3, result;
    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    d2 = (number / 100) % 10;
    d3 = (number / 10) % 10;
    result = number - 5 * (d2 == d3);
    printf("Result: %d\n", result);
    return 0;
}
