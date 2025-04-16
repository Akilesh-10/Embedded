#include <stdio.h>

int main() {
    int number, result, tens;
    printf("Enter a number: ");
    scanf("%d", &number);

    tens = (number / 10) % 10;
    result = number - 5 * (tens % 2);
    printf("Result: %d\n", result);
    return 0;
}
