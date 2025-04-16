#include <stdio.h>

int main() {
    int number, d2, d3, sum;
    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    d2 = (number / 100) % 10;
    d3 = (number / 10) % 10;
    sum = d2 + d3;

    if (sum == 10 && (d2 > 7 || d3 > 7))
        printf("Success\n");
    else
        printf("Failure\n");

    return 0;
}
