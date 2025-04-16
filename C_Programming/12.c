#include <stdio.h>

int main() {
    int number, sum;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    sum = (number / 100) + ((number / 10) % 10) + (number % 10);
    printf("Sum of digits: %d\n", sum);
    return 0;
}
