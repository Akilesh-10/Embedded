#include <stdio.h>

int main() {
    int number, result;
    printf("Enter a number: ");
    scanf("%d", &number);
    result = number % 8;
    printf("Remainder: %d\n", result);
    return 0;
}
