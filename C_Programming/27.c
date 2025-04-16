#include <stdio.h>

int main() {
    int number, d1, d3, sum;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    d1 = number / 100;
    d3 = number % 10;
    sum = d1 + d3;

    if (sum < 10)
        printf("Success\n");
    else
        printf("Failure\n");

    return 0;
}
