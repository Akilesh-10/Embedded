#include <stdio.h>

int main() {
    int number, hundreds, ones, result;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    hundreds = number / 100;
    ones = number % 10;
    result = hundreds * 100 + 0 * 10 + ones;
    printf("Modified number: %d\n", result);
    return 0;
}
