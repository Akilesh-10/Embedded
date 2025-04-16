#include <stdio.h>

int main() {
    int number, d1, d3, result;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    d1 = number / 100;
    d3 = number % 10;
    result = number - 5 * (d1 == d3);
    printf("Result: %d\n", result);
    return 0;
}
