#include <stdio.h>

int main() {
    int number, sum;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    sum = (number / 100) + ((number / 10) % 10) + (number % 10);

    while (sum >= 10) {
        sum = (sum / 10) + (sum % 10);
    }

    printf("Single digit sum: %d\n", sum);
    return 0;
}
