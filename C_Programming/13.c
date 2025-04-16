#include <stdio.h>

int main() {
    int number, reversed;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);
    reversed = (number % 10) * 10 + (number / 10);
    printf("Reversed number: %d\n", reversed);
    return 0;
}
