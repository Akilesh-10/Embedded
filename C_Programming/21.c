#include <stdio.h>

int main() {
    int number, result;
    printf("Enter a number: ");
    scanf("%d", &number);

    result = number - 5 * (number % 2);
    printf("Result: %d\n", result);
    return 0;
}
