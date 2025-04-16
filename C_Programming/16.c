#include <stdio.h>

int main() {
    int number, d1, d2, d3, d4, result;
    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    d1 = number / 1000;
    d2 = (number / 100) % 10;
    d3 = (number / 10) % 10;
    d4 = number % 10;

    result = d1 * 1000 + d2 * 100 + d4 * 10 + d3;
    printf("Modified number: %d\n", result);
    return 0;
}
