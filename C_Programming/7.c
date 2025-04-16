#include <stdio.h>

int main() {
    int number, tens;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);
    tens = number / 10;
    printf("Ten's digit: %d\n", tens);
    return 0;
}
