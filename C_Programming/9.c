#include <stdio.h>

int main() {
    int number, hundreds;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    hundreds = number / 100;
    printf("Hundred's digit: %d\n", hundreds);
    return 0;
}
