#include <stdio.h>

int main() {
    int number, ones, result;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);
    ones = number % 10;
    result = 10 + ones;
    printf("Modified number: %d\n", result);
    return 0;
}
