#include <stdio.h>

int main() {
    int number, sum;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    sum = (number / 100) + ((number / 10) % 10) + (number % 10);

    if (sum == 10)
        printf("Success\n");
    else
        printf("Failure\n");

    return 0;
}
